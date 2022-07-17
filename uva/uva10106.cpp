#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string a,b;
  cin>>a;
  cin>>b;
  int x[255]={},y[255]={},result[255]={};
  int n,m;
  n=a.length();
  m=b.length();
    cout<<m<<n<<endl;
  int j=0,i;
  for(i=n-1;i>=0;i--)
  {
    x[j]=a[i]-'0';
    j++;
  }
  j=0;
  for(i=m-1;i>=0;i--)
  {
    y[j]=b[i]-'0';
    j++;
  }
  cout<<"fpeloop"<<endl;
  int carry=0;
  i=0;
  while(i<n&&i<m)
  {
    int temp=x[i]*y[i]+carry;
    result[i]=temp%10;
    carry=temp/10;
    i++;
  }
  cout<<"while"<<endl;
  while(i<255)
  {
    int temp=x[i]+y[i]+carry;
    result[i]=temp%10;
    carry=temp/10;
    i++;
  }
  if ((result[max(m,n)])!=0)
    cout<<result[max(m,n)];
  for(i=(max(m,n)-1);i>=0;i--)
    cout<<result[i];

}
