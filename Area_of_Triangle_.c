#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z,a,s;
    scanf("%f%f%f",&x,&y,&z);
    s=(x+y+z)/2.0;
    a=sqrt(s*(s-x)*(s-y)*(s-z));
    printf("%.2f",a);
}