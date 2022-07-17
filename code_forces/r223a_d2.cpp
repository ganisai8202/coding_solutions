#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int i=0,j=n-1;
  int ser=0,dim=0;
  int k=0;
  while(k!=n)
  {
    int max=0;
    if(a[i]>a[j])
    {
      max=a[i];
      i++;
    }
    else
    {
      max=a[j];
      j--;
    }
    if(k&1)
      dim+=max;
    else
      ser+=max;
    k++;
  }
/**  if(k&1)
    dim+=a[i];
  else
    ser+=a[i];**/
  cout<<ser<<" "<<dim<<endl;
}
