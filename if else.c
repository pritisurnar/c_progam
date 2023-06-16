#include<stdio.h>
int main() {
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    if((number % 5 == 0)&&(number % 7 == 0)){
        printf("number is multiply by 5 and 7");
    }
    else{
        printf("number is not multiply by 5 and 7");
    }
    return 0;
}