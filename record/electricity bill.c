#include<stdio.h>
int main(){
    float bill;
    float sum[5];
    float readings[5];
    char name[25];
    int eb_no[5];
    for(int j=0;j<1;j++){
        printf("Enter name:");
        scanf("%s",&name[j]);
    }
    for(int k=0;k<1;k++){
        printf("Enter eb number:");
        scanf("%d",&eb_no[k]);
    }
    for(int i=0;i<1;i++){
        printf("Enter units:");
        scanf("%f",&readings[i]);
    }
    for(int i=0;i<1;i++){
        bill=0;
        if(readings[i]<=100){
            bill=0;
        }
        else if(readings[i]>100 && readings[i]<=400){
            bill+=readings[i]*2.25;
        }
        else if(readings[i]>400 && readings[i]<=500){
            bill=900+(readings[i]*4.50);
        }
        else if(readings[i]>500 && readings[i]<=600){
            bill=3150+readings[i]*6;
        }
        else if(readings[i]>600){
            bill=6750+readings[i]*8;
        }
        sum[i]=bill;
    }
    for(int x=0;x<1;x++){
        printf("%.2fINR\n",sum[x]);
    }
}