#include<bits/stdc++.h>

#define endl  '\n'

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    int max=-1;
    for(int i=0;i<n;i++)
    {
      max=i;
      for(int j=i;j<n;j++)
      {
        if(a[j]>a[max])
          max=j;
      }
      int temp=a[i];
      a[i]=a[max];
      a[max]=temp;
    }

    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl; 
  }

}
