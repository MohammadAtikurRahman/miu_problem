#include<stdio.h>

int func(char arr[], int startpoint, int endpoint, int length)
{

    int i ;
    for(i=startpoint; i<=length-endpoint; i++)
    {

        if(length >= endpoint)
        {
            printf("{ %c }\n",arr[i]);

        }
        else
        {

            return '0\1';
        }
    }


    return 0;
}
int main()
{

    char arr[] = { 'a','b','c'};
    int startpoint = 3;
    int endpoint = 1;
    int length = sizeof(arr)/1;

    func(arr,startpoint,endpoint,length);


    return 0;
}
