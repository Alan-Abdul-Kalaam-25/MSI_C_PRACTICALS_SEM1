#include <stdio.h>
int main()
{
    int num1, num2, temp, *ptr1, *ptr2;
    
    printf("NUM1:");
    scanf("%d",&num1);
    
    printf("NUM2:");
    scanf("%d",&num2);
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    printf("Before swapping:-\nNUM1:%d\nNUM2:%d\n",num1, num2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    printf("After swapping:-\nNUM1:%d\nNUM2:%d\n",num1, num2);

    return 0;
}
