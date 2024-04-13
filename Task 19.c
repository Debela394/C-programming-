#include<stdio.h>

int main(){
    
    int i;
    
    double marks[5];
    
    printf("enter five subject mark:\n");
    
    for(i = 0; i < 5; i++){
        scanf("%lf", &marks[i]);
    }
    double sum = 0;
    for(i = 0; i < 5; i++){
        sum = marks[i] + sum;
    }
    
    printf("The total sum = %.2lf\n", sum);
    
    double Avr = sum/5;
    printf("The average is: %.2lf", Avr);
    
    return 0;
}