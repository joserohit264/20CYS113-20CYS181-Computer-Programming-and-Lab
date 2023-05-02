#include<stdio.h>
int main(){
	double x,t,T;
	printf("Enter the time elapsed :");
	scanf("%lf",&t);
	x=((4*t*t)/((2*t)+2));
	T=x-20.00;
	printf("The estimated temperature is : %lf \n",T);
}
