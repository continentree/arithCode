#include <stdlib.h>
#include <stdio.h>
#include "interval_f.h"
#include "artCode_f.h"

int main(int argc, char** argv)
{
    if(argc == 2){
        code_arth c = encode_f(argv[1]);
        printf("Mot renseigné avant encodage : \n");
        printf("%s\n",argv[1]);
        exit(EXIT_SUCCESS);
    }
    else{
        exit(EXIT_FAILURE);
    }
}
