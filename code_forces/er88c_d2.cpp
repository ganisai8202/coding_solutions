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
    int t;
    cin>>t;
    while(t--)
    {
        int h,c,t,i;
        cin>>h>>c>>t;
        int temp=0;
        float avg;
        float prev=h+1;
        if(t>((h+c)/2))
        {
            for(i=1;;i++)
            {
                if(i&1)
                {
                    temp+=h;
                    avg=(float)temp/i;
                    if(abs(avg-t)>prev)
                    {
                        cout<<i-2<<endl;
                        break;
                    }
                    prev=abs(avg-t);
                }
                else
                temp+=c;
            }
        }
        else
            cout<<2<<endl;

    }




    return 0;
}
