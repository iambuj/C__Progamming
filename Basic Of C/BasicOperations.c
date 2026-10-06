#include<stdio.h>
int main() {
    int number1 , number2;
    printf("Enter the number : ");
    scanf("%d" , &number1);
    printf("Enter the 2nd number : ");
    scanf("%d" , &number2);
    int sum = number1+number2;
    int diff = number1-number2;
    int product = number1*number2;
    printf("Sum of the numbers = %d\n" , sum);
    printf("Difference of the numbers = %d\n" , diff);
    printf("Product of the numbers = %d\n" , product);
    return 0;
}