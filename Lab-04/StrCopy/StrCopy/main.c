#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Str[100];
    int i=0;
    char CopyStr[100];
    scanf("%[^\n]s",Str);
    while(Str[i]!='\0'){
        CopyStr[i]=Str[i];
        i++;
    }
    printf("The Original String is %s \nThe Copied String is %s",Str,CopyStr);
    return 0;
}
