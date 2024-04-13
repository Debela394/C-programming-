// Online C compiler to run C program online
#include <stdio.h>

int main() {
 
 int sum = 0;
 
 for(int i=1; i<=100; i=i+2){
     
     sum = sum + i;
     
     printf("sum = sum + %d\n", i);
 }
 
 printf("The sum if odd number bn 0 and 100 is: %d", sum);
    return 0;
}