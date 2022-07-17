#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        unordered_set<int> s;
        for(auto i:a)
          s.insert(i);

        cout<<s.size()<<endl;

    }
    return 0;
}
