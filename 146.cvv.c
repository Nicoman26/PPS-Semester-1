#include <stdio.h>
int main()
{
    int i,j,N;
    printf("inter size of number:");
    scanf("%d",&N);
    {
        printf("pattern upto %d row is \n",N);
        for (i=5;i>=N;i++)

        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        return 0;

}
