#pragma GCC optimize("Ofast")
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(NULL);
  int n,temp;
  float sum=0.0;
  cin>>n;
  temp=n;
  while(temp!=0)
  {
    sum+=((float)1/temp);
    temp--;
  }
  cout<<std::setprecision(12);
  cout<<sum<<endl;
  return 0;
}
