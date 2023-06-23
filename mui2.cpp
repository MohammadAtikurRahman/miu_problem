#include<stdio.h>


int findcenter(int length, int arr[])
{


    printf("lenght by pass %d \n",length);
    int i;
    int middleindex = length / 2 ;

    printf("middle index %d \n",middleindex);

    if(length%2 == 1)
    {
        for( i = 0; i < length; i ++)
        {

            if(arr[middleindex] < arr[i])
            {

                return 1;
            }
            else
            {

                return 0;

            }


        }

    }
    else
    {

        printf("no middle is found");

    }

    return arr[length];
}

int main()
{

    int arr[] = { 1,2,3,4,5};
    int i, len;

    for(i = 0; i < 6; i++)
    {

        len = i ;

    }
    printf("length of array is %d \n", len);

    findcenter(len,arr);

    return 0;
}
