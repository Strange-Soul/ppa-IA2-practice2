#include<stdio.h>

struct _triangle
{
 float base,altitude,area;
};

typedef struct _triangle Triangle;

Triangle input_triangle()
{
 Triangle s;
 printf("Enter the Base and Heigt of Triangle \n");
 scanf("%f %f",&s.base,&s.altitude);
 return s;
}
void find_area(Triangle *t)
{ 
t->area=0.5*(t->base)*(t->altitude);
}
void output(Triangle *t)//t.area=0.5*t.base*t.altitude
{
 printf("Area of triangle with base =%f and with Altitude=%f is %f \n",t->base,t->altitude,t->area);
}
int main()
{
  Triangle x,r;
  x=input_triangle();
  find_area(&x);
  output(&r);
  return 0;
}
