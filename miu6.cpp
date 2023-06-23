#include<stdio.h>

int unionFinder(int arr1[],int arr2[])



{




    int i;
    int j;
    for(i = 0; i <= 4; i++)
    {

        for(j = 0; j <= 2; j++)
        {


            if(arr1[i] == arr2[j])
            {


                printf("matching %d\n",arr2[j]);
            }
            else
            {

                printf("nothing mataching\n");

            }


        }


    }

    return 0;
}

int main()
{



    int arr1[] = {1, 8, 3, 2,6};
    int arr2[] =  {2, 6, 1};

    int arrlen1 = sizeof(arr1)/4;
    printf("len1 main %d\n",arrlen1);


    int arrlen2 = sizeof(arr2)/4;
        printf("len2 %d\n",arrlen2);
    unionFinder(arr1,arr2);




    return 0;
}
