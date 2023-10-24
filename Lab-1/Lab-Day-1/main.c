#include <stdio.h>
#include <stdlib.h>
void  Calculate(float x , float y ,char my_operator);
void Quotient_and_reminder(int x ,int y);
void largest_number(int x ,int y,int z);
int main()
{
    // Question-2
    int x =5;
    float y = 5.50;
    char z = 'C';
    double d = 12.25;
    printf("===========================Question-2===========================\n");
    printf("Hello world! int: %d float:%f y char:%c double:%lf\n\n",x,y,z,d);
    // Question-3
    printf("===========================Question-3===========================\n");
    printf("The ASCII Number for specific character is %d\n\n",z);
    // Question-4
    printf("===========================Question-4===========================\n");
    int n2=6;
    int sum = x+n2;;
    printf("The sum of %d and %d is %d\n\n",x,n2,sum);
    // Question-5
    printf("===========================Question-5===========================\n");
    int num = 15;
    printf("The hexa of %d is %X\n\n",num,num);
    // Question-6
    printf("===========================Question-6===========================\n");
    Calculate(10.0,5.0,'+');
    Calculate(10,5.0,'*');
    Calculate(10.0,5.0,'-');
    Calculate(10.0,5.0,'/');
    // Question-7
    printf("===========================Question-7===========================\n");
       Quotient_and_reminder(10,3);
    printf("===========================Question-8===========================\n");
    largest_number(-1,100,-8);

    return 0;
}
    void  Calculate(float x , float y ,char my_operator)
    {
        if(my_operator=='+')
            printf("The sum of numbers is %f \n\n",x+y);
        else if(my_operator=='-')
            printf("The sub of numbers is %f  \n\n",x-y);
        else if (my_operator=='*')
            printf("The sub of numbers is %f \n\n",x*y);
        else if (my_operator=='/')
            printf("The sub of numbers is %f \n\n",x/y);
    }

    void Quotient_and_reminder(int x ,int y){
        printf("The Quotient of numbers is %d\n",x/y);
        printf("The Quotient of numbers is %d\n\n",x%y);
    }
     void largest_number(int x ,int y,int z){
        if(x>y&&x>z)
            printf("the largest num is %d",x);
        else if(y>x&&y>z)
            printf("the largest num is %d",y);
        else if(z>x&&z>y)
            printf("the largest num is %d",z);
    }

