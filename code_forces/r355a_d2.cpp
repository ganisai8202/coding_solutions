#include<iostream>

typedef long long  ll;
using namespace std;

int main()
{
  int n,h,sum=0,a;
  cin>>n>>h;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(a>h)
      sum+=2;
    else
      sum+=1;

  }
  cout<<sum<<'\n';
}
