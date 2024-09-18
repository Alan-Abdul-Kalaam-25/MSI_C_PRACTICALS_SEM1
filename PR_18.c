#include <stdio.h>

int main(){
    int num, len, maxNum, minNum;
    printf("Enter the size of the array in integer: ");
    scanf("%d",&len);
    
    int arr[len];
    
    for(int i = 0; i < len; i++)
    {
        printf("NUM%d: ",i+1);
        scanf("%d",&num);
        arr[i] = num;
    }
    
    maxNum = arr[0];
    minNum = arr[0];
    
    for(int j = 1; j < len; j++)
    {
        if(arr[j] > maxNum)
        {
            maxNum = arr[j];
        }
        if(arr[j] < minNum)
        {
            minNum = arr[j];
        }
    }
    
    printf("Max value: %d\n", maxNum);
    printf("Min value: %d\n", minNum);
    
    return 0;
}
