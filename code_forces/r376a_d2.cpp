#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int diff=0;
  string s;
  cin>>s;
  char current='a';
  for(auto itr:s)
  {
    int prev,cur;
    prev=current-'a';
    cur=itr-'a';
    int temp=(abs(prev-cur));
    if(temp>13)
    {
      temp=26-temp;
    }
    diff+=temp;
    current=itr;
  }
  cout<<diff<<endl;
}
