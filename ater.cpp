#include<bits/stdc++.h>

using namespace std;
int main(){
    vector<int> arr;
    int x;
    cin>>x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    int min_index=0;
    for(int i=0;i<x;i++)
        if(arr[i]<=arr[min_index])
            min_index=i;


    vector<int> minima;
    minima.push_back(min_index);
    int j=x+1;
    int i=1;
    while(j<=n){
        if(min_index<i){
            int temp=i;
            for(int k=i;k<j;k++){
                if(arr[k]<=arr[temp]){
                    temp=k;
                }
            }
            minima.push_back(temp);
            min_index=temp;
        }

            i++;j++;

    }

    int max=-1;
    for(auto itr:minima){
        if(arr[itr]>max)
            max=arr[itr];
    }
    cout<<endl;
    cout<<max<<endl;
}
