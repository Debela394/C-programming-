// Online C compiler to run C program online
#include <stdio.h>

int main() {

int number;
while(1){
    printf("Enter the  number: ");
    scanf("%d", &number);
    
    if(number<0){
        break;
    }
    printf("%d\n", number);
}
    return 0;
}