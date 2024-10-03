#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int n;

    printf("Enter how many times\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", a); // Corrected to print the value of 'a'
        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
