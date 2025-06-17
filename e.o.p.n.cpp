#include <iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main()
{
int n;
cin>>n;
int i;
int even=0,odd =0,positive=0,negative=0,t=0;
for(int a=0;a<n;a++)
{
    cin>>i;
  if(i<0)
  {
   negative++;
  }
  else if(i>0) 
  {
    positive++;
  }
  else
  {
    t++;
  }
  if(i%2==0)
  {
    even ++;
  }
  else 
  {
    odd++;
  }
}
cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<positive<<endl<<"Negative: "<<negative<<endl;

return 0;
}
