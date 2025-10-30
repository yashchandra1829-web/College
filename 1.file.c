#include<stdio.h>

int main(){
    float a,b,c,d,e;
    int max;
    printf("Enter the marks of five subject :-\n");
    scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e);
    printf("Maximum marks :\n");
    scanf("%d", &max);

    float sum=a+b+c+d+e;
    //result
    printf("The sum of the five subject is : %f",sum);
    printf("Percentage of the student is %f",(sum/(5*max))*100);
    
    return 0;
}