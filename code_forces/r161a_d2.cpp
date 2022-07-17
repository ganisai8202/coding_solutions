#include<iostream>

typedef long long ll;
using namespace std;

int main()
{
  int r=0,c=0;
  int x;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      cin>>x;
      if(x==1)
      {
        r=i;
        c=j;
      }
    }
  }
  cout<<(abs(r-2)+abs(c-2))<<'\n';
}
