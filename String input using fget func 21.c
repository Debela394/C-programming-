#include<stdio.h>

int main(){
    
    int str[40];
    
    printf("Enter your name: ");
    
    fgets(str, sizeof(str), stdin);
    
    printf("%s", str);
    
    return 0;
    
}