#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char Name[100];
    char c;
    int flag=0;
    int counter=0;

    do{
        printf("Enter a char: ");
        scanf("%c",&Name[counter]);
        if(Name[counter]=='\\'){
            scanf("%c",&Name[counter]);
            if(Name[counter]=='0'){
            flag=1;
            Name[counter]='\0';
            }
            else{
                Name[counter]='\\';
            }
        }
        counter++;
        fflush(stdin);
    }
    while(flag==0);
        printf("%s",Name);
    return 0;
}
