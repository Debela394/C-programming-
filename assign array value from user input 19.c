// Online C compiler to run C program online
#include <stdio.h>

int main() {

int age[5];
 
printf("Enter five numbers:\n");

scanf("%d", &age[0]);
scanf("%d", &age[1]);
scanf("%d", &age[2]);
scanf("%d", &age[3]);
scanf("%d", &age[4]);

printf("The 1st array element is: %d", age[0]);
printf("\nThe 2nd array element is: %d", age[1]);
printf("\nThe 3rd array element is: %d", age[2]);
printf("\nThe 4th array element is: %d", age[3]);
printf("\nThe 5th array element is: %d", age[4]);

    return 0;
}