#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x = getch();
        if(-32 == x){
            printf("It is Extended Key");
        }
        else{
            printf("It is normal Key");
        }
    return 0;
}
