// 29/08/2023 - HackerRank C - joaomcavadinha
// Test case's 7,10 and 12 still pending

#include <stdio.h>

int find_nth_term(int n, int a, int b, int c, int counter) {
    // n - step number
    if(n < 4){
        if(n == 3){
            return c;
        }
        if(n == 2){
            return b;
        }
        if(n == 1){
            return a;
        }
    }
    
    if(counter == n){
        return a;
    } else {
        return find_nth_term(n, a+b+c, c, b, counter+1);
    }
}

int main() {
    int n, a, b, c;
    int counter = 3;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c, counter);
 
    printf("%d", ans); 
    return 0;
}
