#include<bits/stdc++.h>

using namespace std;

int maxpow(long long k)
{
  int i=1;
  long long pow;
  pow=k;
  while(pow<=(long long)10e16)
  {
    pow=pow*k;
    i++;
  }
  return i;
}

int main()
{

  int t;
  cin>>t;
  while(t--)
  {
    int flag=0;

    long long n,k;
    cin>>n>>k;
    long long req[n];
    for(int i=0;i<n;i++)
      cin>>req[i];
    int s=maxpow(k);
    for(int i=s;i>=0;i--)
    {
      int max=0;
      int count=0;
      for(int j=0;j<n;j++)
      {
        if(req[j]>=req[max])
        {
          if(req[j]==req[max])
            count++;
          else{
            count=1;
            max=j;
          }
        }
      }
      //cout<<req[max]<<" "<<count<<endl;
      //cout<<"  "<<k<<" "<<s<<endl;
      if(req[max]>=(long long)pow(k,i)){
        if(count>1)
        {
          flag=1;
          cout<<"NO"<<endl;
          break;
        }
        else
          req[max]=req[max]-(long long)pow(k,i);
      }


  }
  for(int j=0;j<n;j++){
    if(req[j]!=0){

      if(flag==0)
      cout<<"NO"<<endl;
      flag=1;
      break;
    }
  }

  if(flag==0)
    cout<<"YES"<<endl;
}



    }
