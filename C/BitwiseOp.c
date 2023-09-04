#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_and=0, max_or=0, max_xor=0;
    for(int x=1; x<n; x++){
        for(int y=x+1; y<=n; y++){
         if((x&y)<k && (x&y)>max_and){
             max_and=x&y;
         }
         if((x|y)<k && (x|y)>max_or){
             max_or=x|y;
         }
         if((x^y)<k && (x^y)>max_xor){
             max_xor=x^y; 
         }
        }
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
