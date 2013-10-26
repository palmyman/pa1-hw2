/* 
 * File:   main.c
 * Author: palmyman
 *
 * Created on October 26, 2013, 12:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

int inputCheck(int n, int check) {
    if (check != 1 || n <= 0) {
        printf("Nespravny vstup.\n"); //Invalid input
        return 0;
    }
    return 1;
}

int readN() {
    int n, check;
    printf("Zadejte n:\n");
    check = scanf("%d", &n);
    if (!inputCheck(n, check))
        return 0;
    return n;
}

int divideWhilePossible(int * arg, int n) {
    if (n <= 1) return 1;
    int possible = 0;
    while (!(* arg % n)) {
        * arg /= n;
        possible = 1;
    }
    return possible;
}

int evalPhi(int x) {
    int phi, i;
    phi = x;
    for (i = 2; i <= x; i++) {
        if (divideWhilePossible(&x, i)) {
            phi *= (i - 1);
            phi /= i;
            //printf("i = %d, x = %d, phi = %d\n", i, x, phi);
        }
    }
    return phi;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int n, phi;
    n = readN();
    if (!n) return 0;
    phi = evalPhi(n);
    printf("phi(%d) = %d\n", n, phi);
    return (EXIT_SUCCESS);
}

