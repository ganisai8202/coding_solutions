#include<bits/stdc++.h>
using namespace std;

float getMedian(vector<int> &counting,int d){
    int limit;
    limit=(d/2)+1;
    bool even=false;
    if(d%2==0)
        even=true;
    int i=0;
    int sum=0;
    int prev=0;
    while(i<=200)
    {
        if(sum+counting[i]>=limit){
            if(even){
                if(sum==(limit-1))
                    return float(prev+i)/2;
                else
                    return i;
            }
            else
                return i;
        }
        sum+=counting[i];
        prev=i;
        i++;
    }
}

int numNotice(const vector<int> &exp,int d){
    int n=exp.size();
    if(d>=n)
        return 0;
    vector<int> counting(201,0);
    int notices=0;
    for(int i=0;i<d;i++)
        counting[exp[i]]++;
    int left=0;

    for(int i=d;i<n;i++){
        float median=getMedian(counting,d);
        cout<<median<<endl;
        if(exp[i]>=(2*median))
            notices++;
        counting[exp[left]]--;
        left++;
        counting[exp[i]]++;
    }
    return notices;
}

int main(){
    int n,d;
    cin>>n>>d;
    vector<int> exp(n,0);
    for(int i=0;i<n;i++)
        cin>>exp[i];
    int notices=numNotice(exp,d);
    cout<<notices<<endl;
}
