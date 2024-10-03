#include <stdio.h>
int main()
{
    long num, t, counter = 0;
    scanf("%d", &num);
     scanf("%d", &t);
int temp=num;
    while (temp> 0)
    {
        temp= temp / 10;
        counter++;
    }
    t = t % counter;
    if (t < 0)
    {
        t = t + counter;
    }
    int div = 1, mul = 1;
    for (int i = 1; i <= counter; i++)
    {
        if (i <= t)
        {
            div = div * 10;
        }
        else
        {
            mul = mul * 10;
        }
    }
    int q = num / div;
    int r = num % div;
    int rot = r * mul + q;
    printf("%d", rot);

    return 0;
}