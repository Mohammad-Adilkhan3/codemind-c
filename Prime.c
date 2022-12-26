#include<stdio.h>
int main(){
    int n,a,b,c,cnt=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
        cnt++;
    }
    if(cnt==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}