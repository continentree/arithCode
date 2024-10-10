#include "interval.h"

#ifndef _ART_CODE_

#define _ART_CODE_

typedef struct {
    int taille;
    interval_f data[256];
} partition_f;

/*
Compte le nombre de char différent dans une chaîne de caractères.
INPUT : char*
OUTPUT : int
*/
int nb_char_diff(char* text);

/*
Créer une partition de l'ensemble [0,1], où à chaque lettre est associée une partition.
INPUT : char*
OUTPUT : partition_f*
*/
partition_f* creer_partition(char* text);

/*
Applique l'encodage arithmétique à une chaîne de caractères.
INPUT : char*
OUTPUT : float
*/
float arith_code(char* text);

#endif
