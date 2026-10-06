#include<stdio.h>
int main() {
    int a , b;
    printf("Enter the 1st number : ");
    scanf("%d" , &a);
    printf("Enter the 2nd number : ");
    scanf("%d", &b);

    int sum = a+b;
    printf("The sum is = %d" , sum);
    return 0;
}