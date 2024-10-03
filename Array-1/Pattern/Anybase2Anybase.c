#include <stdio.h>
int getAnybasetoDecimal(int n, int b)
{
    int rv = 0, dig, p = 1;
    while (n > 0)
    {
        dig = n % 10;
        n = n / 10;
        rv = rv + dig * p;
        p = p * b;
    }
    return rv;
}
int Decimaltoanybase(long n, int b)
{
    int p = 1, rv = 0, dig;
    while (n > 0)
    {
        dig = n % b;
        n = n / b;
        rv = rv + dig * p;
        p = p * 10;
    }
    return rv;
}
int getval(int n, int b1, int b2)
{
    int d1 = getAnybasetoDecimal(n, b1);
    int d2 = Decimaltoanybase(d1, b2);
    return d2;
}
int main()
{
    int res = getval(172, 8, 2);
    printf("%d", res);

    return 0;
}