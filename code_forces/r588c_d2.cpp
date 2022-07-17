#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  int a[50],b[50];
  for(int i=0;i<m;i++)
    cin>>a[i]>>b[i];

  /**if(m==0)
  {
    cout<<0<<endl;
  }**/
  if(n<7)
  {
    cout<<m<<endl;
  }
  else
  {
    int count=0;
      for(int i=0;i<m;i++)
      {
        if(a[i]==7 ||b[i]==7)
          count++;
      }
      cout<<m-count+1<<endl;
  }
}
