#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n],i,j,f;
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++){
        f=1;
        for(j=1;j<=ar[i];j++){
            f=f*j;
        }
        printf("%d
",f);
    }
}