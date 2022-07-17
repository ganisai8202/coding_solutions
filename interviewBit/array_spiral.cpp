#include<bits/stdc++.h>

using namespace std;

vector<int> spiralTraverse(vector<vector<int>> &arr,int n,int m)
{
    vector<int> traverse;
    int t=0,b=n-1;
    int l=0,r=m-1;
    int d=0;
    while(t<=b && l<=r)
    {
        if(d==0){
            for(int i=l;i<=r;i++)
                traverse.push_back(arr[t][i]);
            t++;
            d=1;
        }
        else if(d==1){
            for(int i=t;i<=b;i++)
                traverse.push_back(arr[i][r]);
            r--;
            d=2;
        }
        else if(d==2){
            for(int i=r;i>=l;i--)
                traverse.push_back(arr[b][i]);
            b--;
            d=3;
        }
        else if(d==3){
            for(int i=b;i>=t;i--)
                traverse.push_back(arr[i][l]);
            l++;
            d=0;
        }
    }
    return traverse;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int d;
            cin>>d;
            arr[i].push_back(d);
        }
    }

    vector<int> traverse=spiralTraverse(arr,n,m);
    for(auto itr:traverse)
        cout<<itr<<" ";
    cout<<endl;
}
