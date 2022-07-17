#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int a,b,res,diff;
  while(t--)
  {
    cin>>a>>b;
    if (a==b)
      res=0;
    else if (a>b)
    {
      diff=a-b;
      if(diff%2==0)
        res=1;
      else
        res=2;
    }
    else if(b>a)
    {
      diff=b-a;
      if(diff%2==0)
        res=2;
      else
        res=1;
    }
    cout<<res<<endl;


  }
  return 0;
}
