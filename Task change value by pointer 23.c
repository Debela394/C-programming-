#include<stdio.h>

int main(){
    
    double salary;
    double* ptr = &salary;
    
    printf("Enter the 1st salary: \n");
    scanf("%lf", &salary);
    
    printf("The prevous salary is: %lf\n", salary);
    
    *ptr = salary * 2;
    
    printf("The new salary is: %lf", salary);
    
    return 0;
}

//OR

#include<stdio.h>

int main(){
    
    double salary;
    double* ptr = &salary;
    
    printf("Enter the 1st salary: \n");
    scanf("%lf", &salary);
    
    printf("The prevous salary is: %lf\n", *ptr);
    
    *ptr = salary * 2;
    
    printf("The new salary is: %lf", *ptr);
    
    return 0;
}