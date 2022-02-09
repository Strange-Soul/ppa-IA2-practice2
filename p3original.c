#include<stdio.h>
int input_number()
{
int n;
printf("Enter any Number \n");
scanf("%d",&n);
return n;
}
int is_composite(int n)
{
 int i,c;
 for(i=2;i<n;i++)
 {
  c=n/i;
 }
 return c;
}
void output(int n,int composite)
{
 printf("%d is Composite Number \n",n);
}
int main()
{
 int x,c;
 x=input_number();
 c=is_composite(x);
 output(x,c);
 return 0; 
}