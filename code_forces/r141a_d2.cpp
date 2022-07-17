#include<bits/stdc++.h>

typedef long long ll;
using namespace std;
#define SHOES 4
int main()
{
  unordered_set<int> s;
  for(int i=0;i<SHOES;i++)
  {
    int x;
    cin>>x;
    s.insert(x);
  }
  cout<<(SHOES-s.size())<<'\n';
}
