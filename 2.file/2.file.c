#include<stdio.h>
#include<math.h>

int main(){
// Write a program that calculates the Simple Interest and 
//  Compound Interest. The Principal Amount, Rate of Interest,
//   and Time are entered through the keyboard

float ans,p,t,r;
printf("enter the principle amount :\n");
scanf("%f",&p);
printf("Enter the rate if interest :\n");
scanf("%f",&r);
printf("Enter the time period of intrest :\n");
scanf("%f",&t);

char i;
printf("Enter which interest you have to find 'typr(s/c)' :");
scanf(" %c",&i);

if(i == 's'){
    ans = (p*r*t)/100;
    printf("Your simple intrest is : %f",ans);
}
else if(i == 'c'){
    ans = (p*pow((1+(r/100)),t)) - p;
    printf("Your compound intrest is : %f",ans);
}
else{
    printf("invalid input!");
}
return 0;
}