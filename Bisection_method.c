#include<stdio.h>
#include<conio.h>
#include<math.h>

// define error like decimal
#define E 0.001
// define a function
#define F(x) ((x*x*x)-5*x+3)

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
   


}
