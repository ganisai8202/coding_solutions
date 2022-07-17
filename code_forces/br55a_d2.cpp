#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int up=0,lo=0;
  string s;
  cin>>s;
  for(auto itr:s)
  {
    if(itr>='a'&&itr<='z')
      lo++;
    else
      up++;
  }
  if(up<=lo)
    transform(s.begin(),s.end(),s.begin(),::tolower);
  else
    transform(s.begin(),s.end(),s.begin(),::toupper);
  cout<<s<<endl;

}
