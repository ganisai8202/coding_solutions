#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n,x,wg;
  char op;
  int sad=0;

  cin>>n>>x;
  for(int i=0;i<n;i++)
  {
    cin>>op>>wg;
    if(op=='+')
      x+=wg;
    else
    {
      if(wg>x)
        sad++;
      else
        x-=wg;
    }
  }
  cout<<x<<" "<<sad<<'\n';
}
