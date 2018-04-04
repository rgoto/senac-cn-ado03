#include <stdlib.h>
#include <stdio.h>

#include "lib.h"

int main (int argc, char* argv[]) {

    if (verificacao(argc)) {
        unsigned int num = atoi(argv[1]);
        chartFloat(num);
        chartDouble(num);
        chartLDouble(num);
    } else exit(1);
}
