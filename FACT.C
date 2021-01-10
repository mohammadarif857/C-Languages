#include<stdio.h>
#include<conio.h>
int fac(int);
void main()
{
int n,f;
clrscr();
printf("\n Enetre a no=");
scanf("%d",&n);
f=fac(n);
printf("factorial=%d",f);
getch();
}
int fac(int a)
{
 int s;
if(a==1)
return a;
s=a*fac(a-1);
return s;
}