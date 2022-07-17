#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int res=1;
    int maxi=0;
    for(int i=1;i<l;i++){
        if(s[i]==s[i-1])
            res++;
        else{
            maxi=max(maxi,res);
            res=1;
        }
    }
    maxi=max(maxi,res);
    cout<<(maxi>=7?"YES":"NO")<<endl;
}
