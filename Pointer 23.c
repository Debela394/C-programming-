// Online C compiler to run C program online
#include <stdio.h>

int main() {

int myAge = 44;
int* ptr = &myAge;

printf("The variable value is: %d\n", myAge);

printf("The memory address of the variable using reference: %p\n", &myAge);

printf("The memory address of the variable using pointer: %p\n", ptr);

printf("The variable value using dereference is: %d", *ptr);

    return 0;
}