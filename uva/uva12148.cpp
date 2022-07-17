#include<bits/stdc++.h>

using namespace std;

int nrmyear[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int leap[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int main()
{
  int n;
  while(true)
  {
    cin>>n;
    if(n==0)
      break;
    int d[n],m[n],y[n],c[n];
    int count=0,cons=0;
    for(int i=0;i<n;i++)
      cin>>d[i]>>m[i]>>y[i]>>c[i];
    for(int i=1;i<n;i++)
    {
      if(d[i]==1)
      {
        if(y[i]==y[i-1])
        {
          if(m[i]-m[i-1]==1)
          {
            if((y[i]%4==0&&y[i]%100!=0) || y[i]%400==0)
            {
              if(leap[m[i-1]]==d[i-1])
              {
                count++;
                cons+=(c[i]-c[i-1]);
              }

            }
            else
            {
              if(nrmyear[m[i-1]]==d[i-1])
              {
                count++;
                cons+=(c[i]-c[i-1]);
              }
            }
          }
        }
        else if((y[i]-y[i-1])==1)
        {
          if(m[i]==1&&m[i-1]==12&&d[i-1]==31)
          {
            count++;
            cons+=(c[i]-c[i-1]);
          }
        }
      }
      else
      {
        if((d[i]-d[i-1])==1&&m[i]==m[i-1]&&y[i]==y[i-1])
        {
          count++;
          cons+=(c[i]-c[i-1]);
        }

      }

    }
    cout<<count<<" "<<cons<<endl;


  }
}
