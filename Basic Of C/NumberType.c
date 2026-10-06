#include<stdio.h>
int main() {
    int a;
    printf("Enter the number  : ");
    scanf("%d" , &a);
    if(a > 0) {
        printf("The %d is a positive number" , a);
    }
    else if(a < 0) {
        printf("The %d is a negative number : " , a);
    }
    else{
        printf("Zero");
    }
    return 0;
}