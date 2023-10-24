#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i=0;
    char Str[100];
    scanf("%[^\n]s",Str);
    while(Str[i]!='\0'){
        i++;
    }
    for(int j=0; j< i;j++){
            int counter=0;
            /*ToLower*/
            if(Str[j]>=65&&Str[j]<=90){
                Str[j]+=32;
            }
    if(Str[j]!=' '){
        for(int k=0;k<i;k++){
            if(Str[j]==Str[k]){
                counter++;
            }
        }
          printf(" %c - %d\n",Str[j],counter);
    }

    }
    return 0;
}
