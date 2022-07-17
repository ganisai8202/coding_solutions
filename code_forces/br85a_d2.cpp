#include<iostream>

typedef long long ll;
using namespace std;

int main()
{
  string str1,str2;
  int i;
  cin>>str1;
  cin>>str2;
  int n=str1.length();
  for(i=0;i<n;i++)
  {
    if(tolower(str1[i])<tolower(str2[i]))
    {
      cout<<-1<<endl;
      break;
    }
    else if(tolower(str2[i])<tolower(str1[i]))
    {
      cout<<1<<endl;
      break;
    }
  }
  if(i==n)
    cout<<0<<endl;
}
