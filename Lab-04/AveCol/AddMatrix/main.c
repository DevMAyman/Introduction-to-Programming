#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr1[3][2]={{0,1},{2,3},{4,5}};
    int arr2[3][2]={{6,7},{8,9},{10,11}};
    int arrResult[3][2];
    for(int i=0; i<3 ;i++){
            for(int j=0;j<2;j++){
                arrResult[i][j]=arr1[i][j]+arr2[i][j];
            }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
                printf("     %d     ",arrResult[i][j]);
            }
            printf("\n");
    }
    return 0;
}
