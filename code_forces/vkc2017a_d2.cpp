#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n,k;
  cin>>n>>k;
  char pass[n];
  char ch='a';
  int i=0;
  while(i<n)
  {
    if(i%k==0)
      ch='a';
    pass[i]=ch;
    ch++;
    i++;
}
  for(auto itr:pass)
    cout<<itr;

}
