#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Question-1
    printf("===========================Question-1===========================\n");
    printf("Please Enter a number");
    int x=0;
    scanf("%d",&x);
    if(x>0) {
        printf("Positive\n");}
    else if(x<0) {
            printf("Negative\n");}
    else {
            printf("Zero\n");}
    printf("===========================Question-2===========================\n");
    printf("Please Enter a number");
    int y=0;
    scanf("%d",&y);
    if(0==y) {
            printf("It is zero\n");}
    else if(y%2==0) {
            printf("Even\n");}
    else {
            printf("Odd\n");}
    printf("===========================Question-3===========================\n");
    printf("Please Enter first number");
    int num1=0,num2=0,num3=0;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3) {
            printf("The Largest number is %d\n",num1);}
    else if(num2>=num1 && num2>=num3) {
            printf("The Largest number is %d\n",num2);}
    else if(num3>=num1 && num3>=num1) printf("The Largest number is %d\n",num3);
    printf("===========================Question-4===========================\n");
    printf("Please Enter a grade");
    int num4=0;
    scanf("%d",&num4);
    if(num4>=0 && num4<50) {
            printf("fail\n");}
    else if(num4>=50 && num4<65) {
        printf("pass\n");}
    else if(num4>=65 && num4<75) {
            printf("Good\n");}
    else if(num4>=65 && num4<85) {
            printf("Very Good\n");}
    else if(num4>=75 && num4<85) {
            printf("Excellent\n");}
    else {
            printf("Error Degree");}
    printf("===========================Question-5===========================\n");

      char c;
     int num6=0,num7=0,result=0;

     printf("\nPlease Enter an operator");
     scanf("%c",&c);
     printf("Please Enter two number\n");
     scanf("%d %d",&num6,&num7);

    switch(c){
    case('+'):
        result= num6+num7;
    break;
    case('-'):
        result= num6-num7;
    break;
    case('*'):
        result= num6*num7;
    break;
    case('/'):
       result= num6/num7;
    break;
    default:
        printf("Enter a valid operator");

    }
    printf("The result is %d",result);
    return 0;
}
