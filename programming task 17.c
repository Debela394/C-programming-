#include <stdio.h>
#include <math.h>

int main() {

int a;

printf("please enter the value of a:");
scanf("%d", &a);

double b = sqrt(a);
printf("\nThe square root of %d is: %lf", a, b);

double result = pow(a,b);
printf("\nThe %d power of %lf is = %lf", a, b, result);

    return 0;
    
}