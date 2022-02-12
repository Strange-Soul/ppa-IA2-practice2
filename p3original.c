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
 for( int i=2;i<n;i++)
 {
   if((n % i)==0)//n=8,n/2=4,n%i=8-(8/4)*4=0
   return 1;
 }
 return 0;
}
void output(int n,int composite)
{
 if(composite)
 {
 printf("%d is a Composite Number \n",n);
 }
 else
 printf("%d is  not  a Composite Number \n",n);
}
int main()
{
 int x,c;
 x=input_number();
 c=is_composite(x);
 output(x,c);
 return 0; 
}