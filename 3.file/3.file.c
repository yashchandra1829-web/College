//  Write a program that checks whether the two numbers entered by the user are equal or not
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    if(a == b){
        printf("These two number are equal.");
    }
    else{
        printf("These two number are not equal.");
    }
    return 0;
}