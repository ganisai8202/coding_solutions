#include<bits/stdc++.h>
#include<string>

typedef long long ll;
using namespace std;

#define STRIPS 4
int main()
{
  int a[STRIPS];
  for(int i=0;i<STRIPS;i++)
    cin>>a[i];
  string s;
  cin>>s;
  int sum=0;
  for(auto itr:s)
    sum+=a[itr-'0'-1];
  cout<<sum<<endl;
}
