#include<bits/stdc++.h>

#define pb          push_back
#define	endl        '\n'
#define pi          pair<int, int>
#define pii         pair<int, pi>
#define vi          vector<int>
#define vpi         vector<pi>
#define si          set<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define inv(i,a,b)  for(int i=a;i>=b;i--)
#define mp          make_pair
#define isp(x, i)   ((x).find(i)!=x.end())

using namespace std;
typedef long long ll;
#define N  100005


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    string s;
    cin>>s;
    int maxi=0;
    int count=0;
    int res=1;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
                count+=2;
            }
            else{
                if(maxi!=0 && count==maxi) res++;
                if(count>maxi){
                    maxi=count;
                    res=1;
                }
                count=0;
            }
        }
        else
            st.push(s[i]);
    cout<<count<<" ";
    }
    cout<<endl;
    if(maxi!=0 && count==maxi) res++;
    if(count>maxi){
         maxi=count;
         res=1;
     }
    count=0;
    cout<<maxi<<" "<<res<<endl;

	return 0;
}
