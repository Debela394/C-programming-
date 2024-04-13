// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    double number;
    char alphabet;
    
    printf("Enter input values: ");
    scanf("%lf %c",&number, &alphabet);
    
    printf("\nThe decimal number= %.2lf, \nThe alphabet is: %c", number, alphabet);

    return 0;
}