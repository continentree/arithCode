#include "interval_f.h"
#include <stdlib.h>
#include <stdbool.h>

interval_f* creer_f(float inf_f, float sup_f) {
    interval_f* itvl = (interval_f*)malloc(sizeof(interval_f));
    itvl->inf = inf_f;
    itvl->sup = sup_f;
    return itvl;
}

void supp_f(interval_f *itvl) {
    free(itvl);
}

interval_f* somme_f(interval_f itvl1, interval_f itvl2) {
    return creer_f(itvl1.inf + itvl2.inf, itvl1.sup + itvl2.sup);
}

bool appartient(float x, interval_f itvl) {
    return (x>itvl.inf) && (x<itvl.sup);
}