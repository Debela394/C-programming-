#include<stdio.h>
#include<string.h>

int main(){
    
    char language[] = "string function";
    
    printf("%s", language);
    
    printf("\nThe length of the string: %zu", strlen(language));
    
    return 0;
}