#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (int i = n; i>=1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // int spc = n - 1;
    // int star = 1;
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= spc; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= star; j++)
    //     {
    //         printf("*");
    //     }
    //     star++;
    //     spc--;
    //     printf("\n");
    // }
    // int spc = 0;
    // int star = n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j <= spc; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= star; j++)
    //     {
    //         printf("*");
    //     }
    //     star--;
    //     spc++;
    //     printf("\n");
    // }
    // int spc = n/2;
    // int star = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= spc; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= star; j++)
    //     {
    //         printf("*");
    //     }
    //     if(i<=n/2){
    //     star = star + 2;
    //     spc--;
    // }
    //    else{
    //     star = star - 2;
    //     spc++;
    //    }
    // printf("\n");
    // }
    int spc = 0;
    int star = n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star--;
        spc++;
    printf("\n");

    }

   

return 0;
}