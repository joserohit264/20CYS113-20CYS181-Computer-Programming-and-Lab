#include<stdio.h>
int main(){
	double t,q;
	printf("Enter the voume of the medication (in ml) :");
	scanf("%lf",&q);
	printf("Enter the time taken to infuse the medicine (in minutes) : ");
	scanf("%lf",&t);
	double h,rate;
	h=t/60;
	rate= q/h;
	printf("The volume to be infused : %lf \n",q);
	printf("Rate at which the medicine is infused : %lf \n",rate);
}

