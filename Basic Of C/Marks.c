#include<stdio.h>
int main() {
    int marks;
    printf("Enter the marks : ");
    scanf("%d" , &marks);
    if(marks >= 90 && marks < 101) {
        printf("A Grade");
    }
    else if (marks >= 75 && marks < 90) {
        printf("B Grade");
    }
    else if(marks >= 60 && marks < 75) {
        printf("C Grade");
    }
    else if(marks >= 40 && marks < 60) {
        printf("D Grade");
    }
    else{
        printf("Fail");
    }
    return 0;
}