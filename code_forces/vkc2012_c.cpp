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
    string res="/";
    int t;
    string s;
    cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        if(s=="pwd"){
            cout<<res<<endl;
            continue;
        }
        string temp="";
        for(int i=3;i<=s.length();i++){
            if(i==s.length()||s[i]=='/'){
                if(temp==".."){
                    if(res.length()!=1) res.pop_back();
                    while(res.back()!='/')
                        res.pop_back();
                }
                else if(temp=="."){}
                else if(temp=="")
                    res="/";
                else
                    res+=temp+"/";
                temp="";
            }
            else
                temp+=s[i];
        }

    }
	return 0;
}
