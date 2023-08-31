// Calculate the Nth term - HackerRank - 29/08/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    // n - numero de steps
        if(n == 3)
            return c;
        if(n == 2)
            return b;
        if(n == 1)
            return a;
        else return find_nth_term(n-1, b, c, a+b+c);    // Obs final código
}


int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

// Se n>3, vai executar a recursividade
// n-1 diminui n até que tenha que retornar c
// Já que vai retornar c, em vez de retornar (n-1, a+b+c, b, c), retorna-se a+b+c no lugar de c
