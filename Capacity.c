#include<stdio.h>
void cap(int t,int s, int b){
    int c=(2*t*s*b*512)/1024;
    printf("%d KB",c);
}
int main(){
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    cap(t,s,b);
}