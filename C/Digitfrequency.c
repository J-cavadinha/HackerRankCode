#include <stdio.h>
#include <string.h>

int main() {
    char string[1000];
    scanf("%s", string);
    
    int count[10] = {0};
    for(int i = 0; i < strlen(string); i++){
        if(string[i] >= '0' && string[i] <= '9'){
            count[string[i] - '0']++;
        }
        else if(string[i]==' '){
            i=strlen(string);
        }
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }
    return 0;
}
