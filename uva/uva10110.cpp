#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/**For every factor n has below sqrt {n} it has one above sqrt {n}. This suggests that unless n is a perfect square,
 it has an even number of factors. So, the problem boils down to deciding if
n is a perfect square or not. **/

int main()
{
  ll n;
  while(true)
  {
    cin>>n;
    if(n==0)
      break;
    ll temp=sqrt(n);
    string s=(temp*temp)==n?"yes":"no";
    cout<<s<<'\n';
  }
  return 0;
}
