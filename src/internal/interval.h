#ifndef _INTERVAL_

#define _INTERVAL_

typedef struct {
    float inf;
    float sup;
} interval_f;

typedef struct {
    long inf;
    long sup;
} interval_lf;

interval_f* creer_f(float inf_f, float sup_f);

interval_lf* creer_lf(long inf_ld, long sup_ld);

void supp_f(interval_f *itvl);

void supp_lf(interval_lf *itvl);

interval_f* somme_f(interval_f itvl1, interval_f itvl2); // Pour un float a, itvl1 + [a,a]

interval_lf* somme_lf(interval_lf itvl1, interval_lf itvl2); // Pour un float b, itvl1 + [b,b]

interval_f prod_f(interval_f *itvl1, interval_f *itvl2);

interval_lf prod_lf(interval_lf *itvl1, interval_lf *itvl2);

interval_f div_f(interval_f *itvl1, interval_f *itvl2);

interval_lf div_lf(interval_lf *itvl1, interval_lf *itvl2);

interval_f cos_f(interval_f itvl);

interval_lf cos_lf(interval_lf itvl);





#endif