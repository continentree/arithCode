#include <stdlib.h>
#include <stdbool.h>
#include "artCode.h"

int nb_char_diff(char* text) {
    int cmp = 0;
    int i = 0;
    int j = 0;
    bool is_found = false;
    while(i<256) {
        while(text[j] != '\0' && is_found == false) {
            if((int)text[j] == i) {
                cmp++;
                is_found = true;
            }
            j++;
        }
        is_found = false;
        i++;
    }
    return cmp;
}