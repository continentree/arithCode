#include "interval_f.h"

#ifndef _ART_CODE_

#define _ART_CODE_

typedef struct {
    float code;
    float* probas;
    int nb_char_tot;
} code_arth;

/*
Crée un tableau de probabilité d'apparition pour les 256 caractères ASCII
INPUT : char*
OUTPUT : float*
*/
float* creer_proba_f(char *text);

int compter_char_diff(char *text);

/*
Crée une partition de l'ensemble [0,1], où à chaque lettre est associée une partition.
INPUT : char*
OUTPUT : partition_f*
*/
interval_f* creer_partition(float* proba);

/*
Applique l'encodage arithmétique à une chaîne de caractères.
INPUT : char*
OUTPUT : float
*/
code_arth encode_f(char* text);

/*
Décode un message encodé par codage arithmétique.
INPUT : code_arth
OUTPUT : char*
*/
char* decode_f(code_arth c);

#endif
