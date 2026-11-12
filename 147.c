#import<stdio.h>
int main()
{
    int a [5], i, sum=0;
    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);  //To read the 5 elements into the array
        sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}
/////////This code will only work if Mess is the GOAT
