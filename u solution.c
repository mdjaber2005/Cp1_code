#include<stdio.h>
int main()
{
 double a,b;
 int x;
 scanf("%lf",&a);
 x = a;
 b = a-x ;
 if(b==0){
    printf("int %d",x);
 }
 else {printf("float %d %.3lf\n",x,b);}

}
