#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>
void delay(int number_of_seconds);
void Read_Write_Array();


//C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)

//C Program to find the minimum & maximum value of array elements. (Min_Max Array)
int main()
{
 int size =0, row=1, col=0,value=1;


   /* printf("Enter Array Length\n");
    scanf("%d",&size);
  ;
    while(size%2==0){
        printf("Please Enter an odd number\n");
        scanf("%d",&size);
    }
    col=(size+1)/2;

    do{
        gotoxy(col*5,row);
        printf("%5d",value);
          delay(1);
        if(value%size==0){
            row++;
        }

        else{
            row--;
            col--;
        }

        if(row==0){
            row=size;
        }

        if(col==0){
            col=size;
        }
        value++;
    }while(value<=size*size);
    Read_Write_Array();*/
    int arr[5]={1,-10,2,5,4};
    Max_Min_number(arr,5);

    return 0;
}
    void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void Read_Write_Array(){
    int arr[100];
int size=0;
printf("Please Enter an array length");
scanf("%d",&size);
while(size>100){
        printf("Please Enter a size less than or equal 100\n");
        scanf("%d",&size);
    }
printf("Please Enter array numbers");
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
    printf("%d\n",arr[i]);
}
}

void Max_Min_number(int arr[100],int number){
    int Max=0,Min=0;
for(int i=0;i<number;i++){
    if(Max<arr[i]){
        Max = arr[i];
    }
    if(Min>arr[i]){
        Min=arr[i];
    }
}
printf("Max number is %d and Min number is %d",Max,Min);
}
