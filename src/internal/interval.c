#include "interval.h"
#include <stdlib.h>

interval_f creer_f(float inf_f, float sup_f) {
    interval_f itvl = (interval_f)malloc(sizeof(interval_f));
    itvl.inf = inf_f;
    itvl.sup = sup_f;
    return itvl;
}

interval_ld creer_ld(long inf_ld, long sup_ld) {
    interval_ld itvl = (interval_ld)malloc(sizeof(interval_ld));
    itvl.inf = inf_ld;
    itvl.sup = sup_ld;
    return itvl;
}

void supp_f(interval_f *itvl) {
    free(itvl);
}

void supp_ld(interval_ld *itvl) {
    free(itvl);
}

interval_f somme_f(interval_f itvl1, interval_f itvl2) {
    return creer_f(itvl1.inf + itvl2.inf, itvl1.sup + itvl2.sup);
}

interval_lf somme_lf(interval_lf itvl1, interval_lf itvl2) {
    return creer_lf(itvl1.inf + itvl2.inf, itvl1.sup + itvl2.sup); 
}
