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
void N(matriz);
void A(matriz);
void T(matriz);
void I(matriz);


void crearMatriz(matriz nueva_matriz) {
    int i, j;

    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            nueva_matriz[i][j] = 32;
        }
    }
}

void dibujarMatriz(matriz nueva_matriz) {
    int i, j;

    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            printf("%c ", nueva_matriz[i][j]);
        }
        printf("\n");
    }

    Sleep(1500);

    system("cls");
}

int numeroAleatorio() {
    
    int n = 0;
    srand(time(NULL));
    //srand((unsigned) time(&t));
    n =  rand() % MAX;
    Sleep(1000);
    return n;
}

void N(matriz n) {
    crearMatriz(n);
    dibujarMatriz(n);
    n[3][3] = 78;
    n[4][3] = 78;
    n[5][3] = 78;
    n[6][3] = 78;
    n[7][3] = 78;
    n[8][3] = 78;
    n[4][4] = 78;
    n[5][5] = 78;
    n[6][6] = 78;
    n[7][7] = 78;
    n[8][8] = 78;
    n[3][8] = 78;
    n[4][8] = 78;
    n[5][8] = 78;
    n[6][8] = 78;
    n[7][8] = 78;

    dibujarMatriz(n);
}

void A(matriz a) {
    crearMatriz(a);
    dibujarMatriz(a);

    a[5][3] = 65;
    a[6][3] = 65;
    a[7][3] = 65;
    a[8][3] = 65;
    a[4][4] = 65;
    a[6][4] = 65;
    a[3][5] = 65;
    a[6][5] = 65;
    a[3][6] = 65;
    a[6][6] = 65;
    a[4][7] = 65;
    a[6][7] = 65;
    a[5][8] = 65;
    a[6][8] = 65;
    a[7][8] = 65;
    a[8][8] = 65;

    dibujarMatriz(a);
}

void T(matriz t) {
    crearMatriz(t);
    dibujarMatriz(t);

    t[3][3] = 84;
    t[3][4] = 84;
    t[3][5] = 84;
    t[4][5] = 84;
    t[5][5] = 84;
    t[6][5] = 84;
    t[7][5] = 84;
    t[8][5] = 84;
    t[3][6] = 84;
    t[4][6] = 84;
    t[5][6] = 84;
    t[6][6] = 84;
    t[7][6] = 84;
    t[8][6] = 84;
    t[3][7] = 84;
    t[3][8] = 84;

    dibujarMatriz(t);
}

void I(matriz i) {
    crearMatriz(i);
    dibujarMatriz(i);

    i[3][5] = 73;
    i[4][5] = 73;
    i[5][5] = 73;
    i[6][5] = 73;
    i[7][5] = 73;
    i[8][5] = 73;
    i[3][6] = 73;
    i[4][6] = 73;
    i[5][6] = 73;
    i[6][6] = 73;
    i[7][6] = 73;
    i[8][6] = 73;

    dibujarMatriz(i);
}

void cargarMatriz(matriz nueva_matriz) {
    N(nueva_matriz);
    A(nueva_matriz);
    T(nueva_matriz);
    I(nueva_matriz);
}