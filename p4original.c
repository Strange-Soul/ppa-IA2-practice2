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
int is_composite(int n,int a[n])
{
  for(int i=2;i<a[n];i++)
  {
    if((a[i]%i)==0)
    return 1;
  }
  return 0;
}
int sum_composite_numbers(int n,int a[n])
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
  if(is_composite==1)
  printf("%d is Composite number \n",a[i]);
    sum+=a[i];
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
