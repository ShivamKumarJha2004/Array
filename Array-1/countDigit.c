#include<stdio.h>

int main()
{
int num,counter=0;
printf("Enter the Number");
scanf("%d",&num);
while(num!=0)
{
    num=num/10;
    counter++;
    
}
printf("%d",counter);

return 0;
}
