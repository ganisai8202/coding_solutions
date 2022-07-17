#include<bits/stdc++.h>

using namespace std;

int mark[63];
int a[103];
int g[64][18];
int dep[64];
int dp[103][1<<17];
int par[103][1<<17];
vector<int> primes;

int iabs(int x){return (x>0?x:-x);}
void print_out(int k,int idx){
    if(k==1){
        printf("%d",par[k][idx]);
        return;
    }
    print_out(k-1,idx^dep[par[k][idx]]);
    printf(" %d", par[k][idx]);
}
int main(){
    memset(mark,0,sizeof mark);
    memset(g,0,sizeof(g));
    for(int i=2;i*i<=60;i++){
        for(int j=i;j*i<=60;j++)
            mark[i*j]=1;        //find all composite numbers and mark them 1
    }
    for(int i=2;i<=60;i++){
        if(!mark[i]) primes.push_back(i);
    }
    for(int i=1;i<=60;i++){
        for(int j=0;j<17;j++){
            if(i%primes[j]==0) g[i][j]=1;   //set for each numer their pprime as 1
        }
        int tmp=0;
        for(int j=16;j>=0;j--){
            tmp<<=1;
            tmp+=(g[i][j]?1:0);     // create a bitmap for each number with ith bit set if ith prime is a factor
        }
        dep[i]=tmp;
    }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<(1<<17);j++){
            dp[i][j]=123456;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=60;j++){
            int bm=((1<<17)-1)^(dep[j]);
            for(int k=bm;;k=(k-1)&bm){
                int tmp=dp[i-1][k]+iabs(a[i]-j);
                if(tmp<dp[i][k|dep[j]]){
                    dp[i][k|dep[j]]=tmp;
                    par[i][k|dep[j]]=j;
                }
                if(k==0)
                break;
            }
        }
    }
    int ans = 123456;
    int idx = -1;
    for(int j=0;j<(1<<17);++j){
        if(ans > dp[n][j]){
            ans = dp[n][j];
            idx = j;
        }
    }
    print_out(n, idx);printf("\n");
    return 0;




}
