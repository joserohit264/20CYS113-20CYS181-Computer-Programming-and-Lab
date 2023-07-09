#include<stdio.h>

struct compno
{
    int real, comp;
};

void main()
{
    struct compno a,b;
    scanf("%d %d", &a.real, &a.comp);
    scanf("%d %d", &b.real, &b.comp);
    printf("%d+%di\n",a.real+b.real,a.comp+b.comp);
    printf("%d+%di",a.real-b.real,a.comp-b.comp);
}