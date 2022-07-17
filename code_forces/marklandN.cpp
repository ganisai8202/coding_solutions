#include<iostream>
#include<cstdlib>
using namespace std;
int check(int floor,int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(a[i]==floor)
      return 0;
  }
  return 1;
}

int main()
{
  int t,n,s,k,a[1000],i,j,floor;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>n>>s>>k;
    for(j=0;j<k;j++)
      cin>>a[j];
    
    for(j=0;j<n;j++)
    {
      if(s+j<=n)
      {
        if(check(s+j,a,k))
        {
          floor=s+j;
          break;
        }

      }
      if(s-j>=1)
      {
        if(check(s-j,a,k))
        {
          floor=s-j;
          break;
        }

      }
    }
    cout<<abs(s-floor)<<endl;

  }
  return 0;
}
