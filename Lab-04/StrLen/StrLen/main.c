#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Str[100];
    int i=0;
    scanf("%[^\n]s",Str);
    while(Str[i]!='\0'){
        i++;
    }
    printf("The length of array is %d",i);
    return 0;
}
