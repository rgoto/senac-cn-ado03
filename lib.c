#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "lib.h"

int verificacao (int argc) {
    if (argc >= 2 && argc < 3) return 1;
    else
        return 0;
}

float eulerFunctionFloat (unsigned int n) {
  float num = n+1,
        aux = num/n,
        result = pow(aux, n);

    return result;
}

double eulerFunctionDouble (unsigned int n) {
  double num = n+1,
        aux = num/n,
        result = pow(aux, n);

return result;
}

long double eulerFunctionLDouble (unsigned int n) {
  double num = n+1,
        aux = num/n,
        result = pow(aux, n);

return result;
}

void chartFloat (unsigned int n) {
    float result;


    for (int i = 0; i >= n; i++) {
        result = eulerFunctionFloat(i);
    }
}

void chartDouble (unsigned int n) {
    double result;
    for (int i = 0; i >= n; i++) {
        result = eulerFunctionDouble(i);
    }
}

void chartLDouble (unsigned int n) {
    long double result;
    for (int i = 0; i >= n; i++) {
        result = eulerFunctionLDouble(i);
    }
}

