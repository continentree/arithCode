#include <stdlib.h>
#include <stdio.h>
#include "interval.h"
#include "artCode.h"

int main(int argc, char** argv)
{
    if(argc != 1){
        int cmp_test = nb_char_diff(argv[1]);
        printf("%d\n",cmp_test);
        exit(EXIT_SUCCESS);
    }
    else{
        exit(EXIT_FAILURE);
    }
}
