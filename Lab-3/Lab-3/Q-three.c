void Max_Min_number(int arr[100],int number){
    int Max=0,Min=0;
for(int i=0;i<number;i++){
    if(Max<arr[i]){
        Max = arr[i];
    }
    if(Min>arr[i]){
        Min=arr[i];
    }
}
printf("Max number is %d and Min number is %d",Max,Min);
}
