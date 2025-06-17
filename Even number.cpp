#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
   
int N;
cin >>N;
if(N>=2)
{
for(int i=2;i<=N;i++)
{
    if(i%2 ==0)
    {
    cout<<i<<endl;
    }
}
}
else
{
    cout<<"-1"<<endl;
}
return 0;
}
