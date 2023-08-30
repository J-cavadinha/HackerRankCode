// Sum of Digits of a Five Digit Number - HackerRank - ??/07/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    while(n>0){
        sum = sum + (n % 10);
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
