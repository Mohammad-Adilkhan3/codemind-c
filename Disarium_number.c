#include<stdio.h>
#include<math.h>
int main(){
    int m,q,n,s=0,r,n1;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0){
        r=q%10;
        n1=pow(r,m);
        s=s+n1;
        m--;
        q=q/10;
    }
    if(n==s){
        printf("True");
    }
    else{
        printf("False");
    }
}