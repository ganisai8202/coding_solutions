#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
  if(a<b)
    return a;
  return b;
}

int main()
{
  int i,j,A[50],B[50];
  int sum=0,t,n;
  cin>>t;
  while(t--){
    sum=0;
  cin>>n;
  for(i=0;i<n;i++)
    cin>>A[i];
  for(i=0;i<n;i++)
    cin>>B[i];
  sort(A,A+n);
  sort(B,B+n);
  for(i=0;i<n;i++)
  {
    j=min(A[i],B[i]);
    sum=sum+j;
  }
  cout<<sum<<'\n';
}
}
