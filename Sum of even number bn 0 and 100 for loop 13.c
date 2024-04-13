// Online C compiler to run C program online
#include <stdio.h>

int main() {

int sum = 0;

for(int i=2; i<=100; i=i+2){
    sum = sum + i;
}
printf("The sum of even numbers bn 0 and 100 is: %d", sum);
    return 0;
}