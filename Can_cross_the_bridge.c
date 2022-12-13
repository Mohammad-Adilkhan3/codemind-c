#include<stdio.h>
void brdg(int x,int y,int z){
int n=(z-y)/x;
printf("%d",n);
}
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    brdg(x,y,z);
}