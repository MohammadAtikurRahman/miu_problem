#include<stdio.h>
#include <string.h>

int findCenter( int number[])
{


    int i;
    char str[1000];
    int length;
    int j;


    for(i = 0; i <4 ; i++)
    {
        length = i;

        printf("number[%d] is %d \n",i, number[i] );

    }
    //printf("length is array %d",length);
    //printf("length %ld", strlen(str) );


    int data;

    data = length+1;

    int middle =  data / 2 ;

    printf("middle index is %d \n",middle);
    int middledata = number[middle];

    printf("middle data is %d \n",middledata);

    if(data%2 == 1 ){
    for(j = 0; j <data ; j++)
    {
        if(number[i]> middledata)
        {

            return 1;

        }
        else
        {

            return 0;


        }

    }

           }
           else {

             printf("no middle element");

           }
    return number[4];
}
int main()
{


    int number[4]= {1,2,3,4};

    findCenter(number);

    return 0;
}
