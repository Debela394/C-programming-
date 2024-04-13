#include<stdio.h>

int main(){
    
    int numbers[5] = {1,2,3,4,5};
    
    for(int i = 0; i < 5; i++){
        printf("The array adsress of %d is: %p\n", *(numbers + i), (numbers + i));
    }
    *(numbers + 1) = 7;
    *(numbers + 3) = 9;
    printf("The new array values on %p memory address is: %d\n", (numbers + 1), *(numbers + 1));
    printf("The new array values on %p memory address is: %d", (numbers + 3), *(numbers + 3));
    
    return 0;
}