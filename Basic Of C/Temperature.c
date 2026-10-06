#include<stdio.h>
int main() {
    float celcius;
    printf("Enter the temperature : ");
    scanf("%f" , &celcius);
    float fahrenheit = (celcius * 9)/5 + 32;
    printf("Celsius in Fahrenheit is = %f" , fahrenheit);
    return 0;
}