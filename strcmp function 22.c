#include<stdio.h>
#include<string.h>

int main(){
    
char string1[] = "Hey";
char string2[] = "Yep";
char string3[] = "Hey";

int result1 = strcmp(string1, string2);
int result2 = strcmp(string1, string3);

printf("%d", result1);
printf("\n%d", result2);

    return 0;
}

OR

#include<stdio.h>
#include<string.h>

int main(){
    
char string1[] = "Hey";
char string2[] = "Yep";
char string3[] = "Hey";

printf("%d", strcmp(string1, string2));
printf("\n%d", strcmp(string1, string3));

    return 0;
}