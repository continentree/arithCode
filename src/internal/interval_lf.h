#ifndef _INTERVAL_

#define _INTERVAL_

typedef struct {
    long inf;
    long sup;
} interval_lf;

interval_lf* creer_lf(long inf_ld, long sup_ld);

void supp_lf(interval_lf *itvl);

interval_lf* somme_lf(interval_lf itvl1, interval_lf itvl2); // Pour un float b, itvl1 + [b,b]

interval_lf prod_lf(interval_lf *itvl1, interval_lf *itvl2);

interval_lf div_lf(interval_lf *itvl1, interval_lf *itvl2);

interval_lf cos_lf(interval_lf itvl);





#endif