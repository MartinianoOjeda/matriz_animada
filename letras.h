#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define MAX 10

typedef int matriz[MAX][MAX];

void crearMatriz(matriz);
void dibujarMatriz(matriz);
int numeroAleatorio();
void cargarMatriz(matriz);


void crearMatriz(matriz nueva_matriz) {
    int i, j;

    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            nueva_matriz[i][j] = 0;
        }
    }
}

void dibujarMatriz(matriz nueva_matriz) {
    int i, j;

    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            printf("%c ", nueva_matriz[i][j]);
            if(j == MAX - 1) {
                printf("\n");
            }
        }
    }
}

int numeroAleatorio() {
    
    int n = 0;
    srand(time(NULL));
    //srand((unsigned) time(&t));
    n =  rand() % MAX;
    Sleep(500);
    
    return n;
}

void cargarMatriz(matriz nueva_matriz) {

    nueva_matriz[numeroAleatorio()][numeroAleatorio()] = numeroAleatorio() + 1;
}