#include <stdio.h>
int main()
{
    const int userName= 123;
    const int passWd= 123;
    int userName_ip, passWd_ip;
    printf("Enter Username & Password\n");
    scanf("%d%d", &userName_ip, &passWd_ip);
    if(userName== userName_ip && passWd == passWd_ip)
    {
        printf("User is Authorized");
    }
    else
    {
        printf("User is not Authorized");
    }
    return 0;

}
