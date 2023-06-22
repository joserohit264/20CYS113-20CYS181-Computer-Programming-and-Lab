#include<stdio.h>
struct compno{
    int real,imag;
}a,b,c;
int main(){
    scanf("%d%d",&a.real,&a.imag);
    scanf("%d%d",&b.real,&b.imag);
    scanf("%d%d",&c.real,&c.imag);
    printf("%d + i%d",(a.real*b.real),(a.imag*b.imag));
}
