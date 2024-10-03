#include <stdio.h>

int spanArray(int arr[])
{
    int max = arr[0], min = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 6; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    int res = max - min;
    return res;
}
int main()
{
    int arr[] = {15, 30, 40, 4, 11, 9};
    int res = spanArray(arr);
    printf("%d", res);
    return 0;
}