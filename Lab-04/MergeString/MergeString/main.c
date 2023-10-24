#include <stdio.h>
#include <stdlib.h>

int main()
{

    char fn[10]="Mohamed";
    char ln[10]="Ayman";
    char fullname[50];
    int i=0,j=0;
    while(fn[i]!='\0'){
          fullname[i]=fn[i];
          i++;
    }


  while(fn[j]!='\0'){
          fullname[i]=ln[j];
          i++;
          j++;
    }
        printf("%s",fullname);
    return 0;
}
