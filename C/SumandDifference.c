// Sum and Difference of Two Numbers - HackerRank - ??/07/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float x, y;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", x+y, x-y);
    
    return 0;
}