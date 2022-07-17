#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pi 3.14159265358979323

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,t,k,d;
    cin>>n>>t>>k>>d;

   ll cur=0;
   while(cur<=d)
   {
       n-=k;
       cur+=t;
   }

   if(n>0)
   {
       cout<<"YES";
   }
   else{
       cout<<"NO";
   }


}
