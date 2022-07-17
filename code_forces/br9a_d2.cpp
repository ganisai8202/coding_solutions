#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
int gcd(int a,int b)
{
  if(a==0)
    return b;
  return gcd(b%a,a);
}

int main()
{
  int x,y;
  cin>>x>>y;
  int mx=max(x,y);
  int rem=6-mx+1;
  int cf=gcd(rem,6);
  cout<<(rem/cf)<<"/"<<(6/cf)<<endl;
}
