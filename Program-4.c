//Program to sum odd numbers from 1 to 10
//INPUT- 10
//OUTPUT-25

#include <stdio.h>
int main ()
{
int a=10,sum = 0,i,n;
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 
 if ( i % 2 == 0 )
 continue;
 sum = sum +i;
 }
printf("%d",sum);
return 0;
}


