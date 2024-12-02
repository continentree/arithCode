#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "artCode_f.h"

int compter_symb(char* text) {
    int i = 0;
    while(text[i] != '\0') {
        i++;
    }
    return i;
}

float* creer_proba_f(char *text) {

    float* proba = (float*)malloc(sizeof(float)*256); //création du tableau des probabilités.
    assert(proba != NULL);

    for(int i = 0; i<256; i++) {
        proba[i] = 0.;
    }

    int incr = 0;
    while(text[incr] != '\0') { // Renseignement du nombre d'occurences de chaque char dans text, en renseignant également la longueur de text (incr).
        proba[(int)text[incr]] += 1.;
        incr++;
    }

    for(int i = 0; i<256; i++) { // Calcul menant aux probas.
        proba[i] = proba[i] / (float)incr ;
    }

    return proba;
}

interval_f* creer_partition(float* proba) {
    interval_f* part = (interval_f*)malloc(sizeof(interval_f)*256);
    assert(part != NULL);
    float count = 0.;
    for(int i = 0; i<256; i++) {
        interval_f tmp;
        tmp.inf = count;
        tmp.sup = count + proba[i];
        count = tmp.sup;
    }

    return part;
}

code_arth encode_f(char* text) {

    code_arth res = {.0,creer_proba_f(text),compter_symb(text)};
    interval_f* part = creer_partition(res.probas);

    interval_f c = {0.,1.};

    for(int i = 0; i<256; i++) {
        float BB = c.sup - c.inf;
        c.sup = c.inf + BB*((part[i]).sup);
        c.inf = c.inf + BB*((part[i]).inf);
        assert(c.sup != c.inf);
    }

    res.code = (c.sup + c.inf)/2.;

    return res;
}

char* decode_f(code_arth c) {
    int n = c.nb_char_tot;
    char* mot = (char*)malloc(sizeof(char)*n);
    assert(mot != NULL);
    interval_f* part = creer_partition(c.probas);

    for(int i = 0; i<n; i++) {
        int j = 0;
        while(!(appartient(c.code, part[j]))) {
            j++;
        }
        mot[i] = (char)j;
        c.code = (c.code - part[j].inf)/c.probas[j];
    }

    return mot;
    
}