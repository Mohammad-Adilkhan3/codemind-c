#include<stdio.h>
int main(){
    int n,k,s=0;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(i=0;i<k;i++){
        s+=ar[i];
    }
    printf("%d",s);
    
}