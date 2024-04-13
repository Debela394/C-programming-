// Online C compiler to run C program online
#include <stdio.h>

int main() {

int number;
printf("Enter the number you want to check: ");
scanf("%d", &number);

(number%2 == 0) ? printf("The number is even") : printf("The number is odd");

    return 0;
}