#include<iostream>

typedef long long ll;
using namespace std;

int main()
{
  int n,a[3],sum=0,tot=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    sum=0;
    cin>>a[0]>>a[1]>>a[2];
    for(auto itr:a)
      sum+=itr;
    if(sum>1)
      tot++;
  }
  cout<<tot<<'\n';

}
