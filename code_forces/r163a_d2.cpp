#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  char prev;
  prev=s[0];
  int i=1,count=0;
  while(i<n)
  {
    if(s[i]==prev)
    {
      count++;
      i++;
      continue;
    }
    prev=s[i];
    i++;
  }
  cout<<count<<endl;
}
