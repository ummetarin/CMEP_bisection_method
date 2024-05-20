#include <stdio.h>
#include <conio.h>
#include <math.h>

#define E 0.00001
#define F(x) (x*x+log(x)-2)

int main() {
    float x0, x1, x2, f1, f2, f0;

    do {
        printf("X1 is = ");
        scanf("%f", &x1);
    } while (F(x1) < 0);

    do {
        printf("X2 is = ");
        scanf("%f", &x2);
    } while (F(x2) > 0);

    // printf("\n----------------------\n");
    // printf("\n x1\t x2\t f0\t f1\t f2\n");
    // printf("-------------------------\n");

    do {
        f1 = F(x1);
        f2 = F(x2);

        x0 = (x1*f2-x2*f1)/(f2-f1);

        f0 = F(x0);

        printf("%f\t%f\t%f\t%f\t%f\n", x1, x2, f0, f1, f2);

        if (f1 * f0 < 0) {
            x2 = x0;
        } else {
            x1 = x0;
        }
    } while (fabs(f0) > E);

    printf("\nThe root is = %f\n", x0);

    getch();

    return 0;
}
