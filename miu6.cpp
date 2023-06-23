#include<stdio.h>

int unionFinder(int arr1[],int arr2[]){
 int i;
 int arr3[5];

 for(i = 0; i < 3; i++){

    if(arr1[i] == arr2[i] ){


       printf("matching %d\n",arr1[i]);
       printf("matching %d\n",arr2[i]);

    }
    else{

           printf("nothing mataching");

    }


 }



return 0;
}

int main(){



    int arr1[] = {1,2,3};
    int arr2[] = {1,3,4};

    unionFinder(arr1,arr2);




return 0;
}
