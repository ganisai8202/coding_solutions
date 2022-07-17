#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int max=*(max_element(a,a+n));
  int min=*(min_element(a,a+n));
  int count=0;
  for(int i=0;i<n;i++)
    if(a[i]==max || a[i]==min)
      count++;
  cout<<n-count<<endl;
}
