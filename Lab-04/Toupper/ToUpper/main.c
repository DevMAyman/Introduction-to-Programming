#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    printf("Enter your number\n");
    char Str[100];
    char CopyStr[100];
    scanf("%[^\n]s",Str);
    while(Str[i]!='\0'){
        if(Str[i]>=97&&Str[i]<=122){
            CopyStr[i]=Str[i]-32;
        }
        else{
            CopyStr[i]=Str[i];
        }
        i++;
    }
    printf("%s",CopyStr);
    return 0;
}
