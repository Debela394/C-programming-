// Online C compiler to run C program online
#include <stdio.h>

int main() {
int age;

printf(" To know your age category pls enter your age: ");
scanf("%d", &age);

if(age <= 20 && age >=0){
    printf("You are kid");
}
else if(age >20 && age <= 40){
    printf("At your youth age man");
}
else if(age >40 && age <=60){
    printf("You are adult know calm down");
}
else if(age >60 && age <=120){
    printf("Sorry you are already obsolete");
}
else{
    printf("Invalid range of age");
}
    return 0;
}