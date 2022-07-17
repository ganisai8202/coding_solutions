#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int min_d,max_d;
  for(int i=0;i<n;i++)
  {
    if(i!=0 && i!=n-1)
    {
      min_d=min((a[i]-a[i-1]),(a[i+1]-a[i]));
      max_d=max((a[i]-a[0]),(a[n-1]-a[i]));
    }
    else if(i==0){
      max_d=a[n-1]-a[0];
      min_d=a[i+1]-a[0];
    }
    else
    {
      max_d=a[n-1]-a[0];
      min_d=a[i]-a[i-1];
    }
    cout<<min_d<<" "<<max_d<<'\n';
  }
}
