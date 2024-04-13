#include<stdio.h>

int sum(int k);

int main(){
    
    int number, result;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    result = sum(number);
    
    printf("Sum = %d", result);
    return 0;
}

int sum(int k){
    if(k!=0){
        return k + sum(k - 1);
    }
    else{
        return 0;
    }
}