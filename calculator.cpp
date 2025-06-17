#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int main()
{
   int a,b;
   char ch;
   cin>>a>>ch>>b;
   switch(ch)
   {
   case'+':
   cout<<a+b;
   break;
   case'-':
   cout<<a-b;
   break;
   case'*':
   cout<<a-b;
   break;
   case'/':
    if(a!=0 && b!=0)
    {
   cout<<a/b;
   break;
   }
   else if(a!=0 && b==0)
   {
   cout<< "infinity"; 
   } 
   else if(a==0 && b!=0)
   {
    cout<< "0";
   }
   else
   {
    break;
   }
   break;
  default:
    break;
}
return 0;
}
