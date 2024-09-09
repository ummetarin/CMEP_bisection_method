#include<stdio.h>
#include<conio.h>
#include<math.h>

double fun( double x){
    return (x*x-2*x+3);
}
double der(double x){
    return (2*x-2);
}

double newton(double x0,double tol){
    double x1;
    while (1)
    {
        x1=x0-(fun(x0)/der(x0));
        if(fabs(x1-x0)<tol){
          break;
        }
        else{
            x0=x1;
        }
        return x1;
    }

    


}



int main(){

}
