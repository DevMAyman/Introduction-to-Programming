#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    /*QuestionOne();
    QuestionTwo();
    QuestionThree();
    QuestionFour();
    QuestionFive();
    QuestionSix();

    Questionseven();
     QuestionsEight();
     QuestionsNine();
     QuestionTen();
     QuestionEleven();
     QuestionTwelve();
     QuestioThirteen();
     QuestioFourteen();
     QuestioFifteen();
     QuestioSixteen();
     QuestioSeventeen();
     QuestioEighteen();
     QuestioNineteen();
     QuestioTwenty();*/
     QuestioTwentyOne();
    return 0;
}


void  QuestionOne(){
    int num1=0,num2=0;
    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter second number\n");
    scanf("%d",&num2);
    int result= (num1 + num2)*3-10;
    printf("%d\n",result);
    }
void  QuestionTwo(){
    printf("My name is Mohamed Ayman.\nMy age is 25\n");
}

void  QuestionThree(){
    float degree=0;
    printf("Enter your degree in Celsius \n");
    scanf("%f",&degree);
    printf("The degree in Fahrenheit %f \n",degree*(9/5)+32);
}

void  QuestionFour(){
 float radius=0;
    printf("Enter radius of circle \n");
    scanf("%f",&radius);
    printf("The Area = %f\nthe circumference of circle = %f",3.14*radius*radius,2*3.14*radius);
}

void  QuestionFive(){
    char C=0;
    printf("Please Enter a charachter\n");
    scanf("%c",&C);
    printf("The ASCII number of a charachter %c is %d\n",C,C);
}

void  QuestionSix(){
    int num1=0,num2=0;
    if(num1==num2){
        printf("equal\n");
    }
    else{
        printf("Not equal\n");
        if(num1>num2){
        printf("the highest is number1 %d\n",num1);
        }
        else if (num1<num2){
        printf("the highest is number2 %d\n",num2);
        }
    }

}

void  Questionseven(){
    float num1=0,num2=0,num3=0;
    printf("Enter first number\n");
    scanf("%f",&num1);
    printf("Enter second number\n");
    scanf("%f",&num2);
    printf("Enter third number\n");
    scanf("%f",&num3);
    if(num1<=num2&&num1<=num3){
        printf("The smallest number is the first number  %f\n",num1);
    }
    else if(num2<=num1&&num2<=num3){
        printf("The smallest number is the second number %f\n",num2);
    }
    else if(num3<=num1&&num3<=num2){
        printf("The smallest number is the third number %f\n",num3);
    }
}

void  QuestionsEight(){
    float  number=0;
    printf("Enter a positive number\n");
    scanf("%f",&number);
    while(number<0){
        printf("Please enter a positive number\n");
        scanf("%f",&number);
    }

    if (sqrt(number)*sqrt(number)== number){
        printf("Perfect square");
    }
    else{
        printf("Not Perfect square\n");
    }
}

void  QuestionsNine(){
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
}


void QuestionTen(){
 char c;
     int num6=0,num7=0,result=0;

     printf("\nPlease Enter an operator\n");
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
        printf("Enter a valid operator\n");

    }
    printf("The result is %d\n",result);
}

 void QuestionEleven(){
    int arr[100];
    int result;
    for(int i=0; i<100;i++){
    arr[i]=i;
    }
    for(int i=0; i<100;i++){
    result+=arr[i];
    }
    printf("%d",result);
}

void QuestionTwelve(){
    printf("Enter Your number");
    int number=0;
    int result=1;
    scanf("%d",&number);
    for(int i=1; i<number+1; i++){
        result*=i;
    }
    printf("The factorial of %d is %d",number,result);
}

void QuestioThirteen(){
    printf("Enter Your number");
    int number=0;
    scanf("%d",&number);
    while(number<=0){
        printf("Please enter positive number");
        scanf("%d",&number);
    }

    int i=1;
    int isPrime=1;
   /* for( i=2;i<=sqrt(number);i++){
        if(number%i==0){
            printf("It is not a prime number");
            isPrime=0;
            break;
        }
    }*/
    do{
        i++;
        if(0==(number%i)){
            printf("It is not a prime number");
            isPrime=0;
        }
    }while(number%i!=0 && i<=sqrt(number) );


    if(1==isPrime){
        printf("It is a prime");
    }
}
void QuestioFourteen(){
char charachter = 'A';
for(int i = charachter ;i<charachter+26;i++){
    printf("%c - ",i);
}
printf("\n");
}

void QuestioFifteen(){
    int base=0,power=0,result=1;
printf("Enter The base number\n");
scanf("%d",&base);
printf("Enter the power number");
scanf("%d",&power);
for(int i =0 ; i<power;i++){
    result*=base;
}
printf("The result is %d",result);
}

void QuestioSixteen(){
 int number=0;
 int anotherNumber=0;
 int counter=1;
 int reservedNumber=0;
 int reminder=0;
 printf("Enter your number");
 scanf("%d",&number);
  anotherNumber=number;
 while(anotherNumber%10!=0) {
    reminder=anotherNumber%10;
    anotherNumber=anotherNumber/10;
        counter=counter*10;
 }
counter=counter/10;
 while(counter>=1){
    reminder=number%10;
    number=number/10;
    reservedNumber+=counter*reminder;
    counter=counter/10;
 }
 printf("%d",reservedNumber);
}

void QuestioSeventeen(){
 int number=0;
 int counter=0;
int reminder=0;
 printf("Enter your number");
 scanf("%d",&number);
 while(number/10!=0) {
    reminder=number%10;
    number=number/10;
    counter++;
 }
 printf("%d",counter);
}

void QuestioEighteen(){
    int number=0;
    printf("Enter your number");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    }

    void QuestioNineteen(){
    int number=0;
    printf("Enter your number");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        for(int j=i;j<number;j++){
            printf("* ");
        }
        printf("\n");
    }
    }
    void QuestioTwenty(){
    int number=0;
    printf("Enter your number");
    scanf("%d",&number);
    for(int i=1;i<=number;i+=2){
        for(int j=0;j<(number-i)/2;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
        for(int j=0;j<(number-i)/2;j++){
            printf(" ");
        }
        printf("\n");
    }
    }

    void QuestioTwentyOne(){
        int number=0;
        int counter=0;
        printf("Enter your number");
        scanf("%d",&number);
        if(number%2!=0){
            number+=1;
        }
        counter=number-2;
         int i=0;
        while(counter!=0){

                for(int j=0;j<i;j++){
                    printf(" ");
                }
                printf("*");
                for(int j=0;j<counter;j++){
                    printf(" ");
                }
                printf("*");
                for(int j=0;j<i;j++){
                    printf(" ");
                }
                printf("\n");
            counter-=2;
            i++;
        }

        while(counter!=number){

                for(int j=0;j<i;j++){
                    printf(" ");
                }
                printf("*");
                for(int j=0;j<counter;j++){
                    printf(" ");
                }
                printf("*");
                for(int j=0;j<i;j++){
                    printf(" ");
                }
                printf("\n");
            counter+=2;
            i--;
        }
    }

