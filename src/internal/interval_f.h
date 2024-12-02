#ifndef _INTERVAL_F_

#define _INTERVAL_F_

typedef struct {
    float inf;
    float sup;
} interval_f;

interval_f* creer_f(float inf_f, float sup_f);

void supp_f(interval_f *itvl);

interval_f* somme_f(interval_f itvl1, interval_f itvl2); // Pour un float a, itvl1 + [a,a]

bool appartient(float x, interval_f itvl);

#endif