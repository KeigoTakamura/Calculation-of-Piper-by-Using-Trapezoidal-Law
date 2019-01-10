#include<stdio.h>
#include<stdlib.h>
#define _USE_MATH_DEFINES
#include<math.h>
#define ZERO (double) (0.0)
#define ONE (double) (1.0)
#define TWO (double) (2.0)
#define FOUR (double) (4.0)

double sqrt_func(double x);

int main() {
	int i = 0,j=0, n = 1;
	double a=-1,b=1;
	double h = 0, sum = 0 , c0=0.0;
	double x0 = 0.0;

	for (j=0;j < 12;j++){
	n*=2;

	h = (b-a) / n;

	sum = 0.5* sqrt_func(a) + 0.5 * sqrt_func(b);
	
	for (i = 1; i <= n-1; i++) {
		sum += sqrt_func(a+i*h);
	}
	sum*=h;
	printf("%30.20g  %30.20g %d \n", sum,M_PI,n);

}


}

double sqrt_func(double x) {
return 2/(1+x*x);
}
