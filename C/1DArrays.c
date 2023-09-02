// 1D Arrays in C - Hacker Rank - 01/09/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int sum=0;
    for(int j=0; j<n; j++){
        sum += a[j];
    }
    printf("%d", sum);
    return 0;
}