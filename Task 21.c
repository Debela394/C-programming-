#include<stdio.h>

int main(){
    
    char str[40] = "Debela Tesfaye";
    
    printf("Enter your name: ");
    
    fgets(str, sizeof(str), stdin);
           str[0] = 'X';
    
    printf("%s", str);
    
    return 0;
    
}