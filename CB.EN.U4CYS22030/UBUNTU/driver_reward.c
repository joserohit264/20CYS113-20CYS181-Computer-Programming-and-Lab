#include<stdio.h>
#define S 6.5
int main(){
	double d1,d2,reward;
	printf("Enter the distance travelled before the trip : ");
	scanf("%lf",&d1);
	printf("Enter the distance travelled after the trip : ");
	scanf("%lf",&d2);
	reward = (d2-d1)*S;
	if(d2>d1){
		printf("The reward for the driver = %.3f rs/-\n",reward);
		}
	else if(d1==d2){
		printf("Reward for the driver = 0 rs/-\n");
	}
	else
		printf("Enter valid input values");
}

		
