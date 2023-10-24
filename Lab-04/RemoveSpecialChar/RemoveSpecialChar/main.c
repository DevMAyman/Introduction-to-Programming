#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Str[100];
    char CopyStr[100];
    int i=0;
    scanf("%[^\n]s",Str);
    while(Str[i]!='\0'){
        if(Str[i]>=65&&Str[i]<=90||Str[i]>=97&&Str[i]<=122||Str[i]==32){
             CopyStr[i]=Str[i];
        }
                     i++;

    }
   printf("The String is %s\n",CopyStr);
    return 0;
}
