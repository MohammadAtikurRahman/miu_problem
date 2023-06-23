#include<stdio.h>
#include <stdlib.h>

int reverseInt(int num)
{
    int i ;
    int data;
    int a;
    int store = num;
    int sign = 1;

    if (num < 0)
    {           sign = -1;


        num = abs(num);

        for(i = 0; i < 5; i++)
        {
            a = num % 10;
            num = num / 10;
            printf("%d",a);

    return a*sign;

        }



    }
    for(i = 0; i < 4; i++)
    {
        a = num % 10;
        num = num / 10;
        printf("%d",a);

    }


}

int main()
{

    int num = 1234;

   int a = reverseInt(num);

    printf("Reversed: %d\n", a);


    return 0;
}
