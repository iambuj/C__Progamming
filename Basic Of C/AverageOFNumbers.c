#include<stdio.h>
int main() {
    float a, b;
    printf("Enter the number : ");
    scanf("%f" , &a);
    printf("Enter the 2nd number : ");
    scanf("%f" , &b);
    float avg = (a+b)/2;
    printf("The average of the numbers is = %f" , avg);
    return 0;
}