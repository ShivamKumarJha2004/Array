#include <stdio.h>
//decimal to any base 
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
int getAnybasetoDecimal(int n,int b)
{
    int rv=0,dig,p=1;
    while(n>0)
    {
        dig=n%10;
        n=n/10;
        rv=rv+dig*p;
        p=p*b;
    }
 return rv;
}
int main()
{
    // long res = Decimaltoanybase(12, 2);
    int res=getAnybasetoDecimal(10110,2);
    printf("%ld", res);

    return 0;
}