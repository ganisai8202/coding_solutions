#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int k,r;
  cin>>k>>r;
  int mod=k%10;
  int i=1;
  for(i=1;i<10;i++)
  {
    int temp=(mod*i)%10;
    if(temp==r ||temp==0)
      break;
  }
  cout<<i<<endl;
}
