#include<bits/stdc++.h>
using namespace std;

vector<int> maxSubarray(vector<int> arr,int n)
{
    vector<int> sub;
    vector<int> copyarr(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0){
            arr[i]=sum+arr[i];
            sum=arr[i];
        }
        else{
            sum=0;
        }
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[max])
            max=i;
    }
    int start=max;
    while(start>0 && arr[start]>=0)
        start--;
    if(start!=0)
        start+=1;
    for(int i=start;i<=max;i++)
        sub.push_back(copyarr[i]);
    return sub;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> sub_array=maxSubarray(arr,n);
    for(auto itr:sub_array)
        cout<<itr<<" ";
    cout<<endl;
}
