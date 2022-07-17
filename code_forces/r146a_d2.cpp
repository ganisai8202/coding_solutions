#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  string s;
  int n;
  cin>>s;
  unordered_set<char> dis(s.begin(),s.end());
  n=dis.size();
  if(n&1)
    cout<<"IGNORE HIM!"<<endl;
  else
    cout<<"CHAT WITH HER!"<<endl;
}
