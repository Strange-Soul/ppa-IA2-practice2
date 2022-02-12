#include<stdio.h>
int input()
{
 int n;
 printf("Enter any  Number \n");
 scanf("%d",&n);
 return n;
}
int gcd(int a,int b)
{
 int i,l,s,r;
 l=a>b?a:b;
 s=a<b?a:b;
 i=1;
 r=1;
 while(r)
 {
   r=l-i*s;
   if(r<s)
   {
     l=s;
     s=r;
     i=0;
   }
   i++;
 }
 return l;
}
void output(int a,int b,int gcd)
{
 printf("GCD of %d ,%d is %d \n",a,b,gcd);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=gcd(x,y);
  output(x,y,z);
  return 0;
}