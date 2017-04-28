# include<stdio.h>
#include<conio.h>
int main()
{
int i=1,n,a=1;
scanf("%d",&n);
while(i<=n)
{
a=a*i;
i++;
}
  printf("%d",a);
getch();
return 0;
}
