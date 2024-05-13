#include<stdio.h>
#include<conio.h>
#include<math.h>

// define error like decimal
#define E 0.001
// define a function
#define F(x) ((x*x*x)-2*x*x-4)

int main(){

   float x0,x1,x2,f1,f2,f0;

   do{
    printf("X1 is = ");
    scanf("%f",&x1);
   }while (F(x1)>0);
   
   do
   {
    printf("X2 is = ");
    scanf("%f",&x2);
   } while (F(x2)<0);
   
   printf("\n----------------------\n");
   printf("\n x1\x2\f0\f1\f2");
   printf("\n-------------------------\n");

do
{
  f1=F(x1);
  f2=F(x2);

  x0=(x1+x2)/2;

  f0=F(x0);

  printf("\n%f%f%f%f%f%f",x0,x1,x2,f0,f1,f2);

  if(f1*f0<0){
    x2=x0;
  }
  else{
    x1=x0;
  }


} while (fabs(f0)>E);

printf("\n The root is = %f",x0);

getch();

   

}
