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

    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int a[50];
    a[4]=0,a[8]=1,a[15]=2,a[16]=3,a[23]=4,a[42]=5;
    int count[6]={0};

    int i;
    for(auto itr:arr){
        i=a[itr];
        int temp=i;
        while(i>0&&(count[i-1]>count[temp]))
            i--;
        if(i==0)
            count[temp]++;
        else
            continue;


    }
    int min=INT_MAX;
    for(i=0;i<6;i++){
        if(count[i]<min)
            min=count[i];
    }
    cout<<(arr.size()-(6*min))<<endl;




	return 0;
}
