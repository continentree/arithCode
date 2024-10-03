#include "interval.h"
#include <stdlib.h>

interval_f* creer_f(float inf_f, float sup_f) {
    interval_f* itvl = (interval_f*)malloc(sizeof(interval_f));
    itvl->inf = inf_f;
    itvl->sup = sup_f;
    return itvl;
}

interval_lf* creer_lf(long inf_lf, long sup_lf) {
    interval_lf* itvl = (interval_lf*)malloc(sizeof(interval_lf));
    itvl->inf = inf_lf;
    itvl->sup = sup_lf;
    return itvl;
}

void supp_f(interval_f *itvl) {
    free(itvl);
}

void supp_lf(interval_lf *itvl) {
    free(itvl);
}

interval_f* somme_f(interval_f itvl1, interval_f itvl2) {
    return creer_f(itvl1.inf + itvl2.inf, itvl1.sup + itvl2.sup);
}

interval_lf* somme_lf(interval_lf itvl1, interval_lf itvl2) {
    return creer_lf(itvl1.inf + itvl2.inf, itvl1.sup + itvl2.sup); 
}
