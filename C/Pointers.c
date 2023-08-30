// Pointers in C - HackerRank - ??/07/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    *a = *a + *b;
    update2(a, b);
}

void update2(int *a, int *b) {
    *b = *a - (2 * *b);
    if(*b < 0){
        *b = *b * (-1);
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
