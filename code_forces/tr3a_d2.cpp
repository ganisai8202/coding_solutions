#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int n,b,d,count=0,sum=0;
  cin>>n>>b>>d;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(auto itr:a)
  {
    if(itr<=b)
      sum+=itr;
    if(sum>d)
    {
      sum=0;
      count++;
    }
  }
  cout<<count<<endl;
}
