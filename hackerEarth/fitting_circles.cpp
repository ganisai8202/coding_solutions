  #include<iostream>

  #define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  using namespace std;
  int main()
  {
    int n;
    long int a,b;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a>>b;
    int c=min(a,b);
    int d=max(a,b);
    cout<<d/c<<endl;
  }
    return 0;
  }
