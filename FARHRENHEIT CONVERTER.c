#include<stdio.h>

int main (void)
{
    float a ,b, user;
    printf("Please enter the temperature: ");
    scanf("%f", &user);
    printf("FAHRENHEIT TO CELSIUS CONVERSION TABLE \n");
    a = 0;
    b = user;
    while(b<= user)

    {

        if ((a > 98.6) && (b < 98.6))
        {
            printf("%6.2f degrees F = %6.2f degrees C \n", 98.6, (98.6 - 32.0) * 5.0 / 9.0);
        }

        printf("%6.2f degrees F = %6.2f degrees C \n", b, (b - 32.0) * 5.0 / 9);
        b = a;
        a = a + 10;
    }
    return 0;
}
