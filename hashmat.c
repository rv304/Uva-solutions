#include<stdio.h>

int main()
{
unsigned long int a,b;
while(scanf("%lu %lu",&a,&b)==2)
{
if(a>b)
printf("%d\n",a-b);
else 
printf("%d\n",b-a);
}

return 0;
}