#include<stdio.h>

int main(){
    
    int arr[2][3] = {{1,3,5} , {2,4,6}};
    
    printf("The 2nd elements of 1st array is: %d\n", arr[0][1]);
    printf("The 1st elements of 2nd array is: %d", arr[1][0]);
    
    return 0;
}