#include<stdio.h>

void addNumber(int number1, int number2){
int sum = number1 + number2;
printf("The sum of %d and %d is %d", number1, number2, sum);
}
int main(){
    addNumber(5,9);
}