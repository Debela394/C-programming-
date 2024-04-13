#include<stdio.h>
#include<string.h>

int main(){
    
char string1[20] = "Hey Beauty, ";
char string2[] = "I'm Dollar";

strcat(string1, string2);

printf("%s", string1);

    return 0;
}