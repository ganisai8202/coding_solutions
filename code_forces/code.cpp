#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    char temp;
    for(int i=0;i<n/2;i++){
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    cout<<s<<endl;
}
