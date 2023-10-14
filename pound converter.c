#include <stdio.h>

int main()
{
    float a ,b ,user;
    printf("enter value :");
    scanf("%f",&user);
    a = user;
    b = 10;
    while(a <= 100)
    {

         printf("%f kilogams =%f pounds\n",a, (a + 1.2)*1);
         a = a + b;
    }
    return 0;
}
