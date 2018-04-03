#ifndef _POSIX_C_SOURCE
    #define _POSIX_C_SOURCE 2
#endif
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

    FILE * gnuplot = popen("gnuplot", "w");
    if (!gnuplot)
        printf("Instale o gnuplot para obter os gráficos\n");
    else {
        fprintf(gnuplot, "set term png\n");
        fprintf(gnuplot, "set output \"euler_flt.png\" \n");
        fprintf(gnuplot, "set logscale x\n");
        fprintf(gnuplot, "plot \'Float Error\' with lines\n");

        for (unsigned int i = 0; i >= n; i++) {
            result = eulerFunctionFloat(i);
            fprintf(gnuplot, "%f \t %f \n", (float) i, result);
        }
        fprintf(gnuplot, "e\n");
    }
}

void chartDouble (unsigned int n) {
    double result;

    FILE * gnuplot = popen("gnuplot", "w");
    if (!gnuplot)
        printf("Instale o gnuplot para obter os gráficos\n");
    else {
        fprintf(gnuplot, "set term png\n");
        fprintf(gnuplot, "set output \"euler_dbl.png\" \n");
        fprintf(gnuplot, "set logscale x\n");
        fprintf(gnuplot, "plot \'Double Error\' with lines\n");

        for (unsigned int i = 0; i >= n; i++) {
            result = eulerFunctionDouble(i);
            fprintf(gnuplot, "%f \t %f \n", (double) i, result);
        }
        fprintf(gnuplot, "e\n");
        pclose(gnuplot);
    }
}

void chartLDouble (unsigned int n) {
    long double result;

    FILE * gnuplot = popen("gnuplot", "w");
    if (!gnuplot)
        printf("Instale o gnuplot para obter os gráficos\n");
    else {
        fprintf(gnuplot, "set term png\n");
        fprintf(gnuplot, "set output \"euler_ldbl.png\" \n");
        fprintf(gnuplot, "set logscale x\n");
        fprintf(gnuplot, "plot \'Long Double Error\' with lines\n");

        for (unsigned int i = 0; i >= n; i++) {
            result = eulerFunctionLDouble(i);
            fprintf(gnuplot, "%LF \t %LF \n", (long double) i, result);
        }
        fprintf(gnuplot, "e\n");
        pclose(gnuplot);
    }
}

