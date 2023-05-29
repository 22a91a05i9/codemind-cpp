#include<stdio.h>
#include<math.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    int a[100],i,j=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        }
        for(i=n-1;i>=0;i--) 
        {
            sum+=a[i]*(pow(2,j));
            j++;
            }
            printf("%d",sum);
            }