#include <stdio.h>

int findcenter(int arr[], int length)
{
    int middleIndex = length / 2;
    int i;
    int lesslength = length - 1;

    if (length % 2 == 1)
    {
        for (i = 0; i < length; i++)
        {
            if (arr[i] <= arr[middleIndex] && i != middleIndex)
            {
                return 0;
            }
            else if (i == lesslength)
            {
                return 1;
            }
        }
    }
    else
    {
        printf("Middle element not found");
        return 0;
    }

    return 0;
}

int main()
{
    int arr[] = {3, 2, 1, 4, 5};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    int result = findcenter(arr, sizeArr);
    printf("Result: %d\n", result);

    return 0;
}
