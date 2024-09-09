#include<stdio.h>
#include<math.h>
#include<conio.h>

#define E 0.00001
#define F(x) (x*x+3*x-2)

int main(){
float x0,x1,x2,f0,f1,f2;
do
{
 printf("x1= ");
 scanf("%f",&x1);
} while (F(x1)<0);

do
{
 printf("x2= ");
 scanf("%f",&x2);
} while (F(x2)>0);

do
{
f1=F(x1);
f2=F(x2);
x0=(x1+x2)/2;
f0=F(x0);
if(f0*f1<0){
    x2=x0;
}
else{
    x1=x0;
}

} while (fabs(f0)>E);

printf("root is =%f",x0);





}
