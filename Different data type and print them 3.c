#include<stdio.h>
int main()
{
    int number = 10;
    printf("Number: %d", number);
    double nnumber = 10.29;
    printf("\nDecimal: %lf", nnumber);
    printf("\nDecimal: Shortly: %.2lf", nnumber);
    float exponent = 2e8;
    printf("\nExponent: %f", exponent);
    printf("\nExponent Shortly: %.1f", exponent);
    char character = 'A';
    printf("\nCharacter: %c", character);
    printf("\nCharacter value: %d", character);
    return 0;
}