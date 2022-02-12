#include<stdio.h>
int input_array_size()
{
 int n;
 printf("Enter size of array \n");
 scanf("%d",&n);
 return n;
}
void input_array(int n,int a[n])
{
 printf("Enter array Elements \n");
 for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
}
int sum_composite_numbers(int n,int a[n])
{
  int composite,sum=0;
 for( int i=0;i<n;i++)
 {
   for(int j=2;j<a[i]/2;j++)
   {
     if((a[i]%j)==0)
     {
       return 1;
     }
    else
    {
    return 0;
    }
    if(composite)
      sum=sum+a[i];
     }
   }
   return sum;
 }
void output(int sum)
{
 printf("Sum of Composite Numbers is %d \n",sum);
}
int main()
{
 int x,r;
 x=input_array_size();
 int y[x];
 input_array(x,y);
 r=sum_composite_numbers(x,y);
 output(r);
 return 0;
}
