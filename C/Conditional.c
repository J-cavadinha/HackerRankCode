// Conditional Statements in C - HackerRank - 28/07/2023
// joaomcavadinha
// All test cases done.

#include<stdio.h>

void switchy(int n){
     if(n<1){
        printf("Invalid Number.");
    }
    else{
    switch(n){
        case 1: printf("one");
        break;
        case 2: printf("two");
        break;
        case 3: printf("three");
        break;
        case 4: printf("four");
        break;
        case 5: printf("five");
        break;
        case 6: printf("six");
        break;
        case 7: printf("seven");
        break;
        case 8: printf("eight");
        break;
        case 9: printf("nine");
        break;
        default: printf("Greater than 9");
    }
    }
}

int main(){
    int number;
    scanf("%d", &number);
    switchy(number);
    return 0;
}
