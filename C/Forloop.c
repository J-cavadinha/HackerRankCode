// For loop in C - HackerRank - ??/07/2023
// joaomcavadinha
// All test cases done.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, i;
    char *str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i = a; i <= b; i++){
        if(i > 9){
            if(i%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }
        else{
        printf("%s", str[i]);
        printf("\n");
    }
    }
    

    return 0;
}

