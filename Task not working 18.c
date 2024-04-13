#include<stdio.h>

int fact(int k);

int main(){
    
    int number, result;
    
    printf("Enter positive integer: ");
    scanf("%d", &number);
    
    result = fact(number);
    printf("Fact = %d", result);
    
    return 0;
}
int fact(int k){
    
    if(k > 0){
        return k * fact(k - 1);
    }
    else {
        return 0;
    }
}