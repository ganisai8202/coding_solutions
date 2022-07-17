#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin>>n;
  int x,count=0,off=0;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    if(x==-1)
    {
      if(off>0)
        off--;
      else
        count++;
    }
    else
      off+=x;
  }

  cout<<count<<endl;

}
