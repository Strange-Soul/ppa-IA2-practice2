#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("Enter any String Do U Want to Reverse \n");
  scanf("%s",a);
}
void str_reverse(char *a,char *rev)
{ 
 int length=strlen(a);
 for(int i=0;i<length;i++)
   {
     rev[i]=a[(strlen-1)-i];
   }
}
void output(char *a,char *reverse)
{
printf("Reverse of String %s is %s \n",a,reverse);
}
int main()
{
  char x[20];
  char y[20];
  input_string(x);
  str_reverse(x,y);
  output(x,y);
  return 0;
}