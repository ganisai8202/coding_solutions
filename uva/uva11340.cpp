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

int main()
{
    ll amount;
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char ch;int val;
        unordered_map<char,int> price;
        for(int i=0;i<n;i++){
            cin>>ch>>val;
            price[ch]=val;
        }
        string sentence;
        int m;
        cin>>m;
        getchar();
        amount=0;
        for(int i=0;i<m;i++){
            getline(cin,sentence);
            for(auto itr:sentence){
                amount+=price[itr];
            }
        }
        double final=(double)amount/100;
        printf("%.2f$\n",final);
        // for(auto itr:frequency)
        //     cout<<itr.first<<" "<<itr.second<<endl;
    }
}
