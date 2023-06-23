#include<stdio.h>

int reverseArray(int arr[],  int length){


int i;

printf("lentgh %d \n", length);


for( i = length-1 ; i >= 0 ; i-- ){

printf(" array %d \n",arr[i]);

}


return 0;

}


int main(){



 int arr[] = {1,2,3,4,5};

 int length = sizeof(arr)/4;

 reverseArray(arr,length);


return 0;

}
