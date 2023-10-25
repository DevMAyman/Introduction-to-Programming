#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include<windows.h>
#include <conio.h>
int Check_Enter(char ch);
void gotoxy(int x,int y);
void display(int i,char Word[100]);


int main()
{
    char Str[100];
    char charachter;
    int Monitor=0;
    int Check_Monitor=0;
    int check_enter=0;
    printf("Please Enter your line\n");
    do{
        charachter = getch();
        check_enter=Check_Enter(charachter);
        if(check_enter==1){
            break;
        }
        Str[Monitor]=charachter;
        printf("%c",Str[Monitor]);
        Monitor++;

    }while(check_enter==0);
    system("cls");
     display(Monitor,Str);
     /*printf("%d",Monitor);*/
     Check_Monitor=Monitor;
     /*********************************/
     do{
        charachter=getch();

        if(charachter==-32){
        charachter=getch();
        }

        else if(charachter==8){
            for(int i=Check_Monitor; i<Monitor;i++){
                Str[i]=Str[i+1];
            }
            Monitor--;
        }
        /*Append*/
       else if(charachter!=13){

            for(int i=Monitor; i>=Check_Monitor;i--){
                Str[i+1]=Str[i];
            }

            Str[Check_Monitor]=charachter;
            Check_Monitor++;
            Monitor++;

        }

     if(charachter==75){
        Check_Monitor--;
        gotoxy(Check_Monitor,0);
     }
     else if(charachter==77){
        Check_Monitor++;
        gotoxy(Check_Monitor,0);
     }
     else if(charachter==13){
        system("cls");
        display(Monitor,Str);
        gotoxy(Check_Monitor,0);

     }
     if(Check_Monitor==-1){
        Check_Monitor=0;
     }

     if(Check_Monitor==Monitor+1){
        Check_Monitor=Monitor;
     }
      /*printf("\n%d\n",Check_Monitor);*/


     }while(1);
     /*****************************/

    return 0;
}

int Check_Enter(char ch){
    if(ch==13){
        return 1;
    }
    else{
        return 0;
    }
}


void display(int i,char Word[100]){
for(int j=0;j<i;j++){
        printf("%c",Word[j]);
    }
}
  void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
