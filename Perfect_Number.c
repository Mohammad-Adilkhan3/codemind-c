#include<stdio.h>
int main(){
    int i,j,n,s=0;
    scanf("%d",&n);
    j=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    
    if(s==j){
        printf("True");
    }
    else{
        printf("False");
    }
}