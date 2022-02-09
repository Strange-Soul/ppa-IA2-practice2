#include<stdio.h>
int input_side()
{
 int n;
 printf("Enter the sides of Triangle \n");
 scanf("%d",&n);
 return n;
}
int check_scalene(int a,int b,int c)
{
  int s;
 if(a==b && b==c && c==a )
 {
   s=0;
 }
 else 
 {
   s=1;
 }
 return s;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==0)
 printf("Triangle is not isscalene \n");
 else
 printf("Triangle is isscalene \n");
}
int main()
{
 int x,y,z,r;
 x=input_side();
 y=input_side();
 z=input_side();
 r=check_scalene(x,y,z);
 output(x,y,z,r);
 return 0;
}