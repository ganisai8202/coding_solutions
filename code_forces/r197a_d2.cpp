#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin>>s;
  int n=(s.length()/2)+1;
  char num[n];
  int i=0;
  for(auto itr:s)
    if(itr>='1' && itr<='3')
    {
      num[i]=itr;
      i++;
    }
  sort(num,num+n);
  for(int i=0;i<n-1;i++)
    cout<<num[i]<<'+';
  cout<<num[n-1]<<endl;

}
