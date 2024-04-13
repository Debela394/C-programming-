#include<stdio.h>

int main(){
    
    int arr[2][3] = {{1,3,5} , {2,4,6}};
    
    arr[0][2] = 8;
    arr[1][1] = 9;
    
    printf("The updated 3rd elements of 1st array is: %d\n", arr[0][2]);
    printf("The updated 2nd elements of 2nd array is: %d", arr[1][1]);
    
    return 0;
}