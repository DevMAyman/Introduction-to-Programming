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
    char Checked_charachter;
    int Monitor=0;
    int Check_Monitor=0;
    int check_enter=0;
    /*printf("Please Enter your line\n");*/
    do{

        charachter = getch();
        if(charachter==13){
                    break;
                }
        if (charachter!=-32){


            Str[Monitor]=charachter;
            printf("%c",Str[Monitor]);
            Monitor++;
            /*fgets(Str,Monitor,stdin);*/
        }
        if(charachter==-32){
            Checked_charachter=charachter;
            Checked_charachter=getch();
            if(Checked_charachter==72||Checked_charachter==75||Checked_charachter==80||Checked_charachter==77)
            {
                /*fgets(Str,Monitor,stdin);*/
            }
        }

    }while(check_enter==0);

    system("cls");
    /*printf("/nMohamed");*/
     display(Monitor,Str);
     Check_Monitor=Monitor;

     /***************************************************************************/
     do{
        charachter=getch();

        if(charachter==-32){
        charachter=getch();
        }

        else if(charachter==8){
            for(int i=Check_Monitor-1; i<Monitor;i++){
                Str[i]=Str[i+1];
            }
            Monitor--;
            system("cls");
            display(Monitor,Str);
            gotoxy(Check_Monitor,0);
        }
        /*Append*/
       else if(charachter!=13){

            for(int i=Monitor; i>=Check_Monitor;i--){
                Str[i+1]=Str[i];
            }

            Str[Check_Monitor]=charachter;
            Check_Monitor++;
            Monitor++;
            system("cls");
            display(Monitor,Str);
            gotoxy(Check_Monitor,0);

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
        printf("The last array is\n");
        display(Monitor,Str);
        gotoxy(Check_Monitor,1);
        return 0;
     }
     if(Check_Monitor==-1){
        Check_Monitor=0;
     }

     if(Check_Monitor==Monitor+1){
        Check_Monitor=Monitor;
     }
     }while(1);

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
