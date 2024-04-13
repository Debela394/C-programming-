#include<stdio.h>
#include<string.h>

int main(){
    
    char language[25] = "STRING FUNCTIONS";
    
    printf("%s", language);
    
    printf("\nThe length of the string using strlen: %zu", strlen(language));
    
    printf("\nThe length of the string using sizeof: %d", sizeof(language));
    
    return 0;
}