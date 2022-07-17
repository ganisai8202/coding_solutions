#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  string s;
  cin>>n;
  cin>>s;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  unordered_set<char> pan(s.begin(),s.end());
  string res=(pan.size()==26)?"YES":"NO";
  cout<<res<<'\n';

}
