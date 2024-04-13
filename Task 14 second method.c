#include <stdio.h>

int main() {
        while(1) {
            
            int number;
            printf("\nEnter any number: ");
            scanf("%d", &number);
            
            if (number < 0 && number % 2 != 0) {
                printf("%d", number);
            }
            
            else if (number >= 0) {
                printf("Positive Value");
                break;
            }

            else {
                printf("Negative Even");
                continue;
            }
        }
    return 0;
}