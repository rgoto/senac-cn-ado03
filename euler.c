#include <stdlib.h>
#include <stdio.h>

#include "lib.h"

int main (int argc, char* argv[]) {

    if (verificacao(argc)) {
        unsigned int num = atoi(argv[1]);
        printf("%f\n%f\n%Lf\n", eulerFunctionFloat(num),
                                eulerFunctionDouble(num),
                                eulerFunctionLDouble(num));   

    } else exit(1);
}