#include<stdio.h>

int main(){
    
    int age[5] = {25,23,21,26,28};
    
        age[2] = 30;
    
    printf("The new 3rd array element is: %d", age[2]);
    
    return 0;
}