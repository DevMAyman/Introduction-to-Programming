#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<3;i++){
            float result=0;
        for(int j=0;j<2;j++){
            result+=array[j][i];
        }
        printf("The average for col %d is %f\n",i+1,result/2);
    }
    return 0;
}
