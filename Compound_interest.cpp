#include<stdio.h>
#include<math.h>
int main()
{
    int p,t;
    double r,i;
    scanf("%d%lf%d",&p,&r,&t);
    i=p*pow((1.0+r/100),t);
    printf("%.2lf",i);
}
