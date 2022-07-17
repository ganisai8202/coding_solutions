#pragma GCC optimize("Ofast")
#include<iostream>
#define rows 2
using namespace std;



int main()
{
  int n,q,r,c,x,y,k,p;
  int i,j;
  cin>>n>>q;
  int a[rows][n];
  for(i=0;i<rows;i++)
    for(j=0;j<n;j++)
      a[i][j]=0;
  for(i=0;i<q;i++)
  {
    cin>>r>>c;
    r=r-1;
    c=c-1;
    if (a[r][c]==1)
      a[r][c]=0;
    else
      a[r][c]=1;
    x=0;y=0;
    while(true)
    {
      k=x;p=y;
      if((k==0 &&p==n-1)||(k==1&&p==n-1)){
        cout<<"Yes"<<endl;
        break;
      }
      else{
      if(k<n-1&&a[k][p+1]==0)
        y++;
      else if(k<1&&a[k+1][p]==0)
        x++;
      else{
        cout<<"No"<<endl;
        break;
      }

      }

    }

  }
  return 0;

}
