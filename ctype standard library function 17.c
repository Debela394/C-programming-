#include <stdio.h>
#include <ctype.h>

int main() {

char alpha = 'e';

char upper = toupper(alpha);
printf("the upper case of %c is: %c", alpha, upper);

char lower = tolower(upper);
printf("\nThe lower case of %c is %c", upper, lower);
    return 0;
    
}