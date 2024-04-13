 // Online C compiler to run C program online
#include <stdio.h>

int main() {

 int number;
 
  printf("enter the number: ");
  scanf("%d", &number);

 int counter = 1;

 while(counter <= 10 ){
     int product = number * counter;
     printf("%d*%d = %d\n", number, counter, product);
     
     counter = counter + 1;
 }
    return 0;
}