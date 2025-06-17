#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;


int main()
{
    
int num1,num2,num3;
int max,min;
cin>>num1>>num2>>num3;
if(num1 != num2 && num2!=num3 && num1 !=num3)
{
if(num1 > num2 && num1>num3) 
{
    max=num1;
}
else
{
    if(num2>num1 && num2>num3)
    {
        max=num2;
    }
   else
   {
    max=num3;
   }
}

if(num1 < num2 && num1<num3)
{
    min=num1;
}
else
{
    if(num2<num1 && num2<num3)
    {
        min=num2;
    }
   else
   {
    min=num3;
   }
}
}

else
{
    if(num1==num2 && num2==num3)
    {
        max=num1;
        min=num1;
    }
    else{
if(num1 == num2 && num1 != num3)
{
    if(num1>num3)
{  
 max=num1;
}
else
{
    max=num3;
}
}
else if(num1 == num3 && num1!=num2)
{
    if(num1>num2)
    {
        max=num1;
    }
    else
    {
        max=num2;
    }
}
else if(num2 ==num3 && num2 != num1)
{
    if(num2>num1){
        max=num2;
    }
    else
    {
        max=num1;
    }
}


if(num1 == num2 && num1 != num3)
{
    if(num1<num3)
{  
 min=num1;
}
else
{
    min=num3;
}
}
else if(num1 == num3 && num1!=num2)
{
    if(num1<num2)
    {
        min=num1;
    }
    else
    {
        min=num2;
    }
}
else if(num2 ==num3 && num2 != num1)
{
    if(num2<num1){
        min=num2;
    }
    else
    {
        min=num1;
    }
}
}
}

cout<<min<<" "<<max<<endl;

return 0;

}
