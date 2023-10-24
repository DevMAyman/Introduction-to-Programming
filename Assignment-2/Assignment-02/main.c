#include <stdio.h>
#include <stdlib.h>
int floor(float a, float b);
int main()
{
    /*GetCube();*/
    /***************************************/
    /*chechAlpha();*/

    /***************************************/
    /*GetPositiveOrnegative();*/

    /***************************************/
    /*int x = Calculate();
    printf("%d",x);*/

    /***************************************/
     /*int x = OddOrEven();
    printf("%d",x);*/
    /***************************************/
   /* int x = toUpper();
    printf("%d",x);*/
    /***************************************/
    /*CheckMultiple();*/
        /***************************************/
    /*displayPrimes();*/
    /***************************************/
    /*int x = isPrime();
     printf("%d",x);*/

/*int x=5;
int y=6;
   Swap(&x, &y);
   printf("x= %d ,y= %d",x,y);*/
   /*******************/
  /* int x =numOfHoles();
   printf("x= %d",x);*/
   /*******************/
   /*int x = IsPowerOfTwo(8);
      printf("x= %d",x);*/
      /**************************/
    /*int x =  GetTemperature(10);
     printf("x= %d",x);*/
     /*************************/
     /*int x = floor(1.1,2.01);
     printf("x= %d",x);*/
     /*************************/
     /*int num=0;
     printf("Please enter your number\n");
    scanf("%d",&num);
     for(int i=0;i<num;i++){
        printf("%d, ",fibonacci(i));
     }*/

}

//Q-01
void GetCube(){
int number=0,cubeNumber=1;
printf("Enter your number");
scanf("%d",&number);
for(int i=0;i<3;i++){
    cubeNumber*=number;
}
printf("The cube of number %d is %d",number,cubeNumber);
}
//Q-02
void chechAlpha(){
unsigned char charachter =0;
printf("Enter your charachter");
scanf(" %c",&charachter);
if(charachter>=65&&charachter<=90||charachter>=97&&charachter<=122)
{

     printf("It is an alphaptic charachter");
}

else{
        printf("It is not an alphaptic charachter");
}
}
//Q-03
void GetPositiveOrnegative(){
int number=0;
printf("Please enter a number\n");
scanf("%d",&number);
if(number>0){
    printf("It is Positive\n");
}
else if(number<0){
    printf("It is negative");
}
else{
    printf("It is zero");
}
}

//Q-04
int Calculate(){
 char c;
     int num6=0,num7=0,result=0,flag=0;

     printf("\nPlease Enter an operator");
     scanf(" %c",&c);
     printf("Please Enter two number\n");
     scanf("%d %d",&num6,&num7);
while(0==flag){
        switch(c){
    case('+'):
        result= num6+num7;
        flag=1;
    break;
    case('-'):
        result= num6-num7;
        flag=1;
    break;
    case('*'):
        result= num6*num7;
        flag=1;
    break;
    case('/'):
       result= num6/num7;
       flag=1;
    break;
    default:
        printf("Please enter valid charachter");
        scanf(" %c",&c);;
    }

}

    return result;
}
//Q-05
int OddOrEven(){
    printf("Please Enter a number");
    int y=0;
    scanf("%d",&y);
    if(0==y) {
            printf("It is zero\n");}
    else if(0==(y%2)) {
        return 0;
    }
    else {
            return 1;}
}

//Q-06
int toUpper(int lowercase){
return lowercase-32;
}

//Q-07
void CheckMultiple(){
int MultipledNum=0,num=0;
printf("Enter The MultipleNum");
scanf("%d",&MultipledNum);
printf("Enter second number");
scanf("%d",&num);
if(MultipledNum%num==0){
    printf("the first is multiple of the second.");
}
else{
    printf("the first is not multiple of the second.");
}
}

//Q-08
void displayPrimes(){
int num1=0,num2=0;
printf("Please Enter first num");
scanf("%d",&num1);
printf("Please Enter sceond num");
scanf("%d",&num2);
if(num1>num2){
    int container=num1;
    num1=num2;
    num2=container;
}
for(int i=num1;i<num2;i++){
    int x =isPrime(i);
    if(1==x){
        printf("%d -",i);
    }
}
}
int isPrime(int number){
    int i=1;
    int isPrime=1;
    do{
        i++;
        if(0==(number%i)){
            isPrime=0;
        }
    }while(number%i!=0 && i<=sqrt(number) );
        return isPrime;
}

//Q-09
void Swap(int *num1, int *num2){

    int container= *num1;
    *num1= *num2;
    *num2=container;
}

//Q-10
int numOfHoles(){
 int holes=0;
 int number=0;
 int reminder=0;
 printf("Enter your number");
 scanf("%d",&number);
 while(number/10!=0) {

    reminder=number%10;
     int temp=GetHolesForSpecificNum(reminder);
    number=number/10;
    holes = holes + temp ;

 }
 return holes;
}
int GetHolesForSpecificNum(int number){
if(8==number){
    return 2;
}
else if(0==number||4==number||6==number){
    return 1;
}
else{
    return 0;
}
}

////Q-11
int IsPowerOfTwo(int number){
    int flag=1;
    if(number%2!=0){
        flag=0;
    }
    else{
        do {
                number/=2;
                if(number%2!=0 && number!=1 ){
                    flag=0;
                }
           }while(number%2==0);

    }
     return flag;
}
////Q-12
int GetTemperature(int temperature){
    int heating_time=0;
    if(temperature>=0&&temperature<=30){
        heating_time=7;
    }
    else if(temperature>30&&temperature<=60){
        heating_time=5;
    }

    else if(temperature>60&&temperature<=90){
        heating_time=3;
    }

    else if(temperature>90&&temperature<=100){
        heating_time=1;
    }
    else{
        printf("Invalid");
        heating_time = 0;
    }
    return heating_time;
}
////Q-13
int floor(float a, float b){
int result = a+b;
return result;
}

//Q-14
int fibonacci (int num){
int i=0;
if(num==0){
    return 0;
}
else if(num==1){
    return 1;
}
else{
    return  fibonacci(num - 1) + fibonacci(num - 2);
}
}

//Q-15
