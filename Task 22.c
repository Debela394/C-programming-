#include<stdio.h>
#include<string.h>

int main(){
    
    char string1[20];
    char string2[20];
    
    printf("Enter string1: ");
    fgets(string1, sizeof(string1), stdin);
    
    printf("\nEnter string2: ");
    fgets(string2, sizeof(string2), stdin);
    
    if(strlen(string1) > strlen(string2)){
        printf("%s", string1);
    }
    
    else{
        printf("%s", string2);
    }

    return 0;
}