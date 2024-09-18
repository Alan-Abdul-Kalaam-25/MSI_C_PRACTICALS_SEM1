#include <stdio.h>

double fact(double);

double fact(double num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }
    else 
    {
        return num * fact(num - 1);
    }
}

int main(){
    double num, factorial;
    
    printf("Enter num to find its factorial: ");
    scanf("%lf",&num);
    
    factorial = fact(num);
    
    printf("\nFactorial of %lf is %lf",num, factorial);
    return 0;
}
