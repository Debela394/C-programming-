#include<stdio.h>

int addNumber(int number1, int number2){
int sum = number1 + number2;
return sum;
}
int main(){
   
    int sum = addNumber(8,9);
    printf("The sum is %d", sum);
    return 0;
}