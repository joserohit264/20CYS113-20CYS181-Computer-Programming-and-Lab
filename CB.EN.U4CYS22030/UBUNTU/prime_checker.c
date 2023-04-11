#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("Enter the number to be checked : ");
    scanf("%d",&n);
    if(n<0){
	    printf("Negative numbers are not prime numbers\n");
    }
    else if(n==0){
	    printf("0 is not a prime number\n");
    }
    else if(n==1){
	    printf("Neither prime nor composite\n");
    }
    else if(n==2){
	    printf("2 is the only prime number\n");
    }
    else{
    for(int i=2;i<(n) && i>1;i++){
        if(n%i==0){
            a=a+1;
        }
    }
    }
    
    if(a>0){
        printf("%d is not a prime number.\n",n);
        printf("Number of factors for %d = %d\n",n,a+2);
    }
    else
    printf("%d is a prime number.\n",n);
}
