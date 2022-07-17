#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  int a[n],arr[5]={};
  vector<vector<int>> amount(4);


  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    arr[x]++;
    amount[x].push_back(i+1);
  }
  int fin=min(arr[1],arr[2]);
  fin=min(fin,arr[3]);
  cout<<fin<<endl;
  for(int i=0;i<fin;i++)
  {
    cout<<amount[1][i]<<" "<<amount[2][i]<<" "<<amount[3][i]<<endl;
  }

}
