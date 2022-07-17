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


string max_num(int m,int s){
    if(s==0)
        return (m==1)?"0":"-1";
    int sum=s;
    string maxi="";
    int sub;
    for(int i=0;i<m;i++){
        sub=min(s,9);
        maxi+=('0'+sub);
        s-=sub;
    }
    if(s!=0)
        return  "-1";
    return maxi;
}

string min_num(int m,int s){
    if(s==0)
        return (m==1)?"0":"-1";
    int sum=s;
    string mini="";
    if(s<=9*(m-1)){
        mini="1";
        s--;
        m--;
        while(s<=(9*(m-1)))
            mini+="0",m--;
        string temp="";
        while(s>0){
            int sub=min(s,9);
            temp+=('0'+sub);
            s-=sub;
        }
        for(int i=temp.length()-1;i>=0;i--)
            mini+=temp[i];
    }
    else if(s>9*m)
        mini="-1";
    else{
        string temp="";
        while(s>0){
            int sub=min(s,9);
            temp+=('0'+sub);
            s-=sub;
        }
        for(int i=temp.length()-1;i>=0;i--)
            mini+=temp[i];
    }
    return mini;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int m,s;
    cin>>m>>s;
    string maxi,mini;
    maxi= max_num(m,s);
    mini=min_num(m,s);
    //mini = min_num(m,s);
    cout<<mini<<" "<<maxi<<endl;




	return 0;
}
