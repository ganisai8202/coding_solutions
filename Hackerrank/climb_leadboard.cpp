#include<bits/stdc++.h>

using namespace std;


int main()
{
  vector<int> alice;
  vector<int> scores;
  int n,m,temp;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>temp;
    scores.push_back(temp);
  }
  vector<int> rank(n);
  for(int i=0;i<n;i++)
  {
    if(i==0)
      rank[i]=1;
    else if(scores[i]==scores[i-1])
      rank[i]=rank[i-1];
    else
      rank[i]=rank[i-1]+1;
  }
  cin>>m;
  for(int i=0;i<m;i++){
    cin>>temp;
    alice.push_back(temp);
  }
  int last=rank[n-1];
  int current_rank;
  int j=n;
  for(int i=0;i<m;i++)
  {
    while(j>=0 && alice[i]>scores[j])
    {
      j--;
    }
    if(j==-1)
      current_rank=1;
    else if(alice[i]==scores[j])
      current_rank=rank[j];
    else if (alice[i]<scores[j])
      current_rank=rank[j]+1;
    cout<<current_rank<<endl;

  }

}
