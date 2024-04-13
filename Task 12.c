 // Online C compiler to run C program online
#include <stdio.h>

int main() {

int number = 9;
int counter = 10;

while(counter >= 1){
    int product = number * counter;
    printf("%d*%d = %d\n", number, counter, product);
    
    counter = counter - 1;
}

return 0;
}