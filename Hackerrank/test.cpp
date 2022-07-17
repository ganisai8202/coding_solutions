#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<vector<int>> queries(q,vector<int>(3,0));
    for(int i=0;i<q;i++)
        for(int j=0;j<3;j++)
            cin>>queries[i][j];
    vector<vector<int>> seqlist(n);
    int la=0;
    for(int i=0;i<q;i++)
    {
        if(queries[i][0]==2)
        {
            int ind=(queries[i][1]^la)%n;
            la=seqlist[ind][queries[i][2]%(seqlist[ind].size())];
            cout<<la<<endl;
        }
        else
        {
            int ind=(queries[i][1]^la)%n;
            seqlist[ind].push_back(queries[i][2]);
        }
        /**for(int i=0;i<n;i++)
        {
          for(auto itr:seqlist[i])
          {
            cout<<itr<<" ";
          }
          cout<<endl;
        }**/
    }

}
