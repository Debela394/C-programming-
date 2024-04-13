// Online C compiler to run C program online
#include <stdio.h>

int main() {
int age;

printf("Enter your age: ");
scanf("%d", &age);

if(age >= 18){
    printf("You are able to Eligible");
}
if(age < 18)
{
    printf("Sorry you are not able to eligible");
}
    return 0;
}