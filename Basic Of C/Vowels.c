#include<stdio.h>
int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c" , &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("%c is a Vowel" , ch);
        break;
    default : printf("%c is a Consonant " , ch);
    }
    return 0;
}