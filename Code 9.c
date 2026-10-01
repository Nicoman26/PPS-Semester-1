#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Equation:");
    scanf("%d", &a);
    if(a>0)
    {
        printf("The equation is real");
    }
    else if (a==0)
    {
        printf("The equation is distinct");
    }
    else
    {
        printf("The equation is Imaginary");
    }
    return 0;
}

