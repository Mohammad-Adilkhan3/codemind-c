#include<stdio.h>
int main()
{
    int n,n1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        if(n1<3)
        printf("LIGHT
");
        else if(n1>=3 && n1<7)
        printf("MODERATE
");
        else
        printf("HEAVY
");
    }
}