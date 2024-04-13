#include<stdio.h>

int main(){
    
    int arr[] = {34,12,21,54,68};
    
    int largest = *arr;
    
    for(int i = 0; i < 5; i++){
        
        if(largest < *(arr + i)){
            
            largest = *(arr + i);
        }
    }
        printf("The largest array element is: %d", largest);
 
    return 0;

}