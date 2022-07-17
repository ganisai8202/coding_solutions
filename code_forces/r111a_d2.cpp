#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
  int n;
  cin>>n;
  vector<int> a(n,0);
  for(int i=0;i<n;i++)
  cin>>a[i];
  int sum=accumulate(a.begin(),a.end(),0);
  int count=0;
  sort(a.rbegin(),a.rend());
  int i;
  for(i=0;i<n;i++)
  {
    count+=a[i];
    if(count>(sum-count))
    break;
  }
  cout<<i+1<<'\n';
}
