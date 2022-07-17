#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else{
        n=n*-1;
        int a=n/10;
        int b=((n/100)*10)+(n%10);
        cout<<min(a,b)*-1<<endl;
    }

}
