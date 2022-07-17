#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  string num;
  cin>>num;
  if(k==0)
    cout<<num<<endl;
  //int temp=n-1;

  else if (n==1 && k==1)
  {
    cout<<"0"<<endl;
  }
/**  else
  {
    while(temp && (s%(pow(10,temp)))==0)
      temp--;
  }**/
  else
  {
    //string num=to_string(s);
    int count=0;
    for(int i=0;(i<n&&count<k);i++)
    {


      if(i!=0&&num[i]!='0'){

        num[i]='0';
        count++;
      }
      else if(i==0 && num[i]!='1'){

        num[i]='1';
        count++;
      }
      else
        continue;
    }

    cout<<num<<endl;
  }
}
