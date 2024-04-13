// Online C compiler to run C program online
#include <stdio.h>

int main() {
while(1){
    
    int number;
    printf("\nEnter the number: ");
    scanf("%d", &number);
    
    if(number > 0){
        printf("Positive value:- %d\n", number);
        break;
    }
    if(((number %2)!=0)&&(number < 0)){
        printf("%d\n", number);
        continue;
    }
    printf("Negative even\n");
}
    return 0;
}