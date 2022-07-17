#include<iostream>

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()
{
    int n{0},q{0};
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    while(q--)
    {
      int query,l,r;
      cin>>query>>l>>r;
      if (query==1)
        a[l]=r;
      else if(query==2){
        if ((l<=r) && (l>=0) && (r<n)){
          int sum{0};
          for(int i=l;i<=r;i++)
            sum+=a[i];
          cout<<sum<<endl;

        }
        else
          cout<<"-1"<<endl;
      }
    }
    return 0;
}
