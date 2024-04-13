#include<stdio.h>
int main(){
    
    int number;
    printf("Enter the number 1 up to 7: ");
    scanf("%d", &number);
    
    switch (number){
        
        case 1:
        printf("Sunday");
        break;
        
        case 2:
        printf("Monday");
        break;
        
        case 3:
        printf("Teusday");
        break;
        
           case 4:
        printf("Wednsday");
        break;
        
        case 5:
        printf("Thursday");
        break;
        
        case 6:
        printf("Friday");
        break;
        
        case 7:
        printf("Saturday");
        break;
        
        default:
        printf("Invalid number");
    }
    return 0;
}