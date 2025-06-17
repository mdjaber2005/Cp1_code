#include<stdio.h>
int main (){
long long a,b,c,d;
long long difference=0;

scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
difference = (a*b) - (c*d);
printf("Difference = %lld",difference);
return 0;
}
