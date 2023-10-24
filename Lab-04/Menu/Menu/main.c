#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "standard_types.h.h"
void gotoxy(int x,int y);

struct student {
    u8 name[20];
    u8 gender;
    u8 age;
    s32 id;
};

void print_struct_Students(struct student s[],int size );
int counter=0;
void scan_struct_Students(struct student s[],int counter);
int main()
{
     char x;

     int esc=0;
     int i=0;
     int Co_X=50;
     int currentY=0;
     int Y_Coordinates[4]={5,10,15,-1};
     /**************************************/
       struct student students[100];

     /**************************************/
     char Menu_Names[3][10]={"NEW","DISPLAY","EXIT"};
        display();
   do{

        char x = getch();
        if(-32 == x){
            x= getch();
        }
        /*Handle Down Arrow*/
        switch(x){
            case 80:
                  i++;
            if(-1==Y_Coordinates[i]){
                i=0;
            }
            /*white others*/
            for(int j=0;j<3;j++){
                if(j!=i){
                    gotoxy(Co_X,Y_Coordinates[j]);
                    SetColor(15);
                    printf("%s",Menu_Names[j]);
                }
            }
            gotoxy(Co_X,Y_Coordinates[i]);
            SetColor(4);
            printf("%s",Menu_Names[i]);

            gotoxy(Co_X,Y_Coordinates[i]);
            break;
            case 72:
                if(0==i){
                i=2;
            }
            else{
                i--;
            }
            for(int j=0;j<3;j++){
                if(j!=i){
                    gotoxy(Co_X,Y_Coordinates[j]);
                    SetColor(15);
                    printf("%s",Menu_Names[j]);
                }
            }
            gotoxy(Co_X,Y_Coordinates[i]);
            SetColor(4);
            printf("%s",Menu_Names[i]);
            gotoxy(Co_X,Y_Coordinates[i]);
            break;
            case 13:
            if(2!=i){
                system("cls");
                gotoxy(Co_X,Y_Coordinates[i]);
                printf("%s",Menu_Names[i]);
                if(0==i){
                     system("cls");
                     SetColor(15);
                     scan_struct_Students(students,counter);
                     display();
                }
                else if(1==i){
                   print_struct_Students(students,counter);
                   x=  getch();
                    if(-32 == x){
                        x= getch();
                    }
                    if(8==x){
                        display();
                        i=0;
                    }
                }
            }
            else if(2==i){
                esc=27;
            }
            break;
            case 8:
                display();
            break;
            case 27:
                 esc=27;
            break;
        }
    } while(esc !=27);
     for(int j=0;j<3;j++){
                    gotoxy(Co_X,Y_Coordinates[j]);
                    SetColor( );
                    printf("%s",Menu_Names[j]);
            }
    gotoxy(Co_X-5,18);
    SetColor(4);
    printf("Program is terminated !\n\n");
    return 0;
}



   void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }




void scan_struct_Students(struct student s[],int size){

    char ch='a';
    do{
        printf("Do you want add more y or n\n");
        ch=getch();
        while(ch!='y'&&ch!='n'){
           printf("Please enter y or n: \n");
           ch=getch();
        }

        if(ch!='n'){
        printf("Enter name [%d]",size+1);
        scanf("%[^\n]s",s[size].name);
        printf("Enter age [%d]",size+1);
        scanf("%d",&s[size].age);
        printf("Enter ID [%d]",size+1);
        scanf("%d",&s[size].id);
        printf("Enter Gender [%d]",size+1);
        scanf(" %c",&s[size].gender);
        fflush(stdin);
        counter++;
        size++;
        }


    }while(ch=='y');
}
void print_struct_Students(struct student s[],int size ){
            system("cls");
            gotoxy(0,0);
            SetColor(15);
    for(int i=0; i<size; i++){

          printf("name[%d] = %s \n",i+1,s[i].name);
          printf("gender[%d] = %c \n",i+1,s[i].gender);
          printf("age [%d]=  %d \n",i+1,s[i].age);
            printf("id [%d] =  %d \n",i+1,s[i].id);
    }

}

void display(){
                system("cls");
                gotoxy(50,15);
                SetColor(15);
                printf("EXIT");
                gotoxy(50,10);
                SetColor(15);
                printf("DISPLAY");
                gotoxy(50,5);
                SetColor(4);
                printf("NEW");
                gotoxy(50,5);
}


