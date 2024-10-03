#include <stdio.h>
int digitFreq(int num[], int key)
{
    int counter = 0;
    for (int i = 0; i < 5; i++)
    {
        if (num[i] == key)
        {
            counter++;
        }
        
    }
   if(counter>0)
   {
    printf("counter is %d:",counter);
   }
   else
   {
    printf("%d is not present",key);
   }
}

int main()
{
    int arr[] = {10,10, 20, 30, 10, 2};

     digitFreq(arr, 100);
    return 0;
}