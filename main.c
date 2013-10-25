/* 
 * File:   main.c
 * Author: palmyman
 *
 * Created on October 26, 2013, 12:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

int inputCheck(int n, int check) {
    if (check != 1 || n < 0) {
        printf("Nespravny vstup.\n"); //Invalid input
        return 0;
    }
    return 1;
}

int readN() {
    int n, check;
    printf("Zadejte n:\n");
    check = scanf("%d", &n);
    if(!inputCheck(n, check))
        return 0;
    return n;
}

int evalPhi(int n) {
    int phi;
    phi = 0;
    
    return phi;
}

/*
 * 
 */
int main(int argc, char** argv) {
    int n, phi;
    n = readN();
    if(!n) return 0;
    phi = evalPhi(n);
    printf("phi(%d) = %d\n", n, phi);
    return (EXIT_SUCCESS);
}

