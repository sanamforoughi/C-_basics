#include <stdio.h>
#include <math.h>

int t, i, j;
double t2[11];
double npvOperation(double low, double high, int counter);
int main(int argc, char const *argv[])
{
	while (scanf("%d", &t) != 0 && t) {
		for (i = 0; i <= t; i++) {
			scanf("%lf", &t2[i]);
		}
		double low = -1;
		double high = 10000;
		double mid;
		double res;
		int counter = 0;
        res = npvOperation(low, high, counter);
		printf("%.2lf\n", res);
    }
    return 0;
}

double npvOperation(double low, double high, int counter) {
    double mid;
    while(low <= high && counter < 100) {
        mid = (high+low)/2;
        double npv = 0;
        counter ++;
        for (i = 0; i <= t; i++)
            npv += t2[i]/pow(1+mid, i);
        if(npv > 0) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return mid;
}
