/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 1 marzo 2015, 19.07
 */

#include <stdio.h>
#include <stdlib.h>

#define X 2
#define Y 4

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j;
    int matrixA[Y][X];
    int matrixB[Y][X];
    int matrixC[Y][X];
    int matrixD[Y][X];
    printf("Inserisci i valori della matrice A\n");
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Inserisci il valore %d della riga %d : ", i, j);
            scanf("%d", &(matrixA[j][i]));
        }
    }
    printf("\nInserisci i valori della matrice B\n");
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Inserisci il valore %d della riga %d : ", i, j);
            scanf("%d", &(matrixB[j][i]));
        }
    }
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            matrixC[j][i] = matrixA[j][i] + matrixB[j][i];
        }
    }
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            matrixD[j][i] = matrixA[j][i] * matrixB[j][i];
        }
    }
    printf("Valori della Matrice C (A + B)\n");
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Valore %d della riga %d : %d\n", i, j, matrixC[j][i]);
        }
    }
    printf("Valori della Matrice D (A * B)\n");
    for(j = 0; j < Y; j++) {
        for(i = 0; i < X; i++) {
            printf("Valore %d della riga %d : %d\n", i, j, matrixD[j][i]);
        }
    }
    
    return (EXIT_SUCCESS);
}