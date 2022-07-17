#include<bits/stdc++.h>

using namespace std;

int main()
{
  long S,X;
  int N;
  cin>>S>>X>>N;
  map<int,int> mp;
  int k,v;
  for(int i=0;i<N;i++)
  {
    cin>>k>>v;
    mp.insert({k,v});
  }

  long int days{0},distance_rem;
  distance_rem=S;
  while(distance_rem>0)//only greter than not equal to zero because if distance_rem=0,we are at destination
  {
    days=days+1;   //increment the days, we will be travelling this days cause we entered the loop
    auto itr=mp.begin();
    if (itr->first==days)
    {
      distance_rem-=itr->second;
      mp.erase(itr);  //in map keys are sorted by default, so remove the first (key,value) as they are used
    }
    else
      distance_rem-=X;
  }
    cout<<days<<endl;

  return 0;

}

/**for(auto itr=mp.begin();itr!=mp.end();itr++)
{
  cout<<itr->first<<'\t'<<itr->second<<'\n';
}**/
