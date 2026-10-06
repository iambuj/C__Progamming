#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d" , &number);
    int cube = number * number * number;
    printf("The cube of the number = %d\n" ,cube);
    int square = number*number;
    printf("The square of the number = %d\n" , square);
    return 0;
}