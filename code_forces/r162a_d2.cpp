#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
int main()
{
  string s,ins;
  cin>>s;
  cin>>ins;
  int n=ins.length();
  int c=0;
  for(int i=0;i<n;i++)
  {
    if(ins[i]==s[c])
      c++;
  }
  cout<<c+1<<'\n';
}
