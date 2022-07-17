#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  int prev=0,gr=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(i>0 &&prev!=a[i])
      gr++;
    prev=a[i];

  }
  gr++;
  cout<<gr<<endl;
}
