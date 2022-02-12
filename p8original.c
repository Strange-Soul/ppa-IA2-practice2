#include<stdio.h>

struct _triangle
{
  float base,altitude,area;
};

typedef struct _triangle Triangle;

int input_n()
{
 int n;
 printf("Enter the Number of Triangles \n");
 scanf("%d",&n);
 return n;
}
Triangle input_triangle()
{
 Triangle t;
 printf("Enter Base and Altitude of Triangle \n");
 scanf("%f %f",&t.base,&t.altitude);
 return t;
}
void input_n_triangles(int n,Triangle t[n])
{
 printf("Enter the Base and Altitude of Triangle \n");
 for(int i=0;i<n;i++)
 t[i]=input_triangle();
}
void find_area(Triangle *t)
{
 t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
 for(int i=0;i<n;i++)
 t[i].area=0.5*t[i].base*t[i].altitude;
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
Triangle small;
small=t[0];
for(int i=0;i<n;i++)
{
  if(small.area>=t[i].area)
  {
    small=t[i];
  }
  return small;
}
}
void output(int n,Triangle t[n],Triangle smallest)
{
 for(int i=0;i<n;i++)
 {
   printf("The Smallest of Triangle with base and altitude  %f %f and %f %fis \n",t[i].base,t[i].altitude,t[n-i].base,t[n-i].altitude);
 }
 printf("Traiangle with base=%f and altitude=%f is %f\n",t[n].base,t[n].altitude,t[n].area);
 printf("The Triangle with smallest area in n given triangles %f %f is %f \n",t[n].base,t[n].altitude,t[n].area);
}
int main()
{
  int x;
  x=input_n();
  Triangle p,s,t;
  Triangle q[x];
  input_n_triangles(x,q);
  find_areas_n(x,q);
  s=find_smallest_triangle(x,q);
  output(x,q,s);
  return 0;
}