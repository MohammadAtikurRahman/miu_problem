#include<stdio.h>

int findcenter(int arr[],int length)
{

    int middleIndex = length / 2 ; // 2
    int i,lesslenght;
    lesslenght = length - 1;


    if(length%2 == 1)
    {

        for(i = 0 ; i < length ; i ++)
        {
            if(arr[i] > arr[middleIndex] && lesslenght == i)
            {
                printf("one");

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

        printf("middle element not found");
        return 0;



    }





}

int main()
{



    int arr[] = {3,2,1,4,5};

    int sizeArr = sizeof(arr) / 4;

// printf("length of array is %d",sizeArr);



    findcenter(arr,sizeArr);






    return 0;
}
