#include<stdio.h>
#include<string.h>

int main(){
    
char string1[] = "Hello world";
char string2[] = "World Hello";

printf("The 1st string is: %s", string1);
printf("\nThe second string is: %s", string2);

strcpy(string2, string1);

printf("\nFinally The copied function is: %s", string2);

    return 0;
}