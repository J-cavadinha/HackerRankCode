// "Hello World!" in C - HackerRank - ??/07/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World!\n");
    printf("%-30s", s);
    return 0;
}