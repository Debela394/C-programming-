// Online C compiler to run C program online
#include <stdio.h>

int main() {

double number;
printf("Enter the number you want to check: ");
scanf("%lf", &number);

if(number == 0){
    printf("The number is zero");
}
else if(number > 0){
    printf("The n number is positive");
}
else{
    printf("The number is Negative");
}
    return 0;
}