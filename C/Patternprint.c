// Printing pattern using loops - HackerRank - 29/08/2004
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void inicia(int matriz[][100], int lc){
    for(int i=0; i<lc; i++){
        for(int j=0; j<lc; j++){
            matriz[i][j]= 0;
        }
    }
}

void problema(int n, int matriz[][100], int lc){
    for(int i=0; i<lc; i++){
        for(int j=0; j<lc; j++){
            if(i == 0 || i==lc-1){
                    matriz[i][j] = n;
            }
            else {
                matriz[i][j]= 0;
            }
        }
    }
}

int main() 
{

    int n;
    scanf("%d", &n);
    
    int lc = (2*n) -1;  // Calcula o número de linhas e colunas
  	int matriz[lc][lc];

    inicia(matriz, lc);
    problema(n, matriz, lc);
    
    for(int i=0; i<lc; i++){
        for(int j=0; j<lc; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}