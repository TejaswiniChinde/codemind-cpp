#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
          c1=c1+a[i];   
        }
        else
        {
            c2=c2+a[i];
        }
    }
    printf("%d",abs(c1-c2));
}