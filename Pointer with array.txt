#include<stdio.h>

int main(){
    
    int myNumber[4] = {2,3,4,5};
    
    for(int i = 0; i < 4; i++){
        
        printf("%d = %p\n", myNumber[i], &myNumber[i]);
    }
    
    printf("Array address %d is: %p\n", myNumber[0], myNumber);
    printf("merory address of %d is: %p\n", myNumber[1], myNumber + 1);
     printf("merory address of %d is: %p\n", myNumber[2], myNumber + 2);
      printf("merory address of %d is: %p\n", myNumber[3], myNumber + 3);
    
    return 0;
}