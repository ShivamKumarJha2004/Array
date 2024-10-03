#include <stdio.h>
void Barchart(int arr[])
{
    int max = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int j = max; j >= 1; j--)
    {
        for (int i = 0; i < 6; i++)
        {
            if (arr[i] >= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {2, 3, 4, 1, 7, 2};
    Barchart(arr);

    return 0;
}