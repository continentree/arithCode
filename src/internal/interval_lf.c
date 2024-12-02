#include "interval_lf.h"
#include <stdlib.h>

interval_lf* creer_lf(long inf_lf, long sup_lf) {
    interval_lf* itvl = (interval_lf*)malloc(sizeof(interval_lf));
    itvl->inf = inf_lf;
    itvl->sup = sup_lf;
    return itvl;
}

void supp_lf(interval_lf *itvl) {
    free(itvl);
}

interval_lf* somme_lf(interval_lf itvl1, interval_lf itvl2) {
    return creer_lf(itvl1.inf + itvl2.inf, itvl1.sup + itvl2.sup); 
}
