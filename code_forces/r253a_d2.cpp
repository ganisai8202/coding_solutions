#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  string s;
  getline(cin,s);
  unordered_set<char> a;
  for(auto itr:s)
    if(itr>='a'&&itr<='z')
      a.insert(itr);
  cout<<a.size()<<endl;
}
