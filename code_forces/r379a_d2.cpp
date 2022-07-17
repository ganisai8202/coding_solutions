#include<iostream>

typedef long long ll;
using namespace std;

int main()
{
  int n,a=0,d=0;
  string s;
  cin>>n;
  cin>>s;
  for(auto itr:s)
  {
    if(itr=='A')
      a++;
    else
      d++;
  }
  if(a>d)
    cout<<"Anton"<<'\n';
  else if(d>a)
    cout<<"Danik"<<'\n';
  else
    cout<<"Friendship"<<'\n';
}
