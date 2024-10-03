#include<stdio.h>
int isPrime(int N){
       int counter=0;
       if(N==1)
       {
           return 0;
       }
       for(int div=2;div*div<=N;div++)
       {
           if(N%div==0)
           {
               counter++;
               break;
           }
       }
       if(counter==0)
       {
           return 1;
       }
       else 
       {
           return 0;
       }
    }
    int main()
    {
        int n=15;
      int  res= isPrime(n);
        if(res)
        {
            printf("Prime");
        }
        else
        {
            printf("Not prime");
        }

    }