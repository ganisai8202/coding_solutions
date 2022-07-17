#include<iostream>
using namespace std;

int main()
{
  int a,n,sum{0},rem,temp;
  cin>>a;
  while(true)
  {
    sum=0;
    temp=a;
    while(temp!=0)
    {
      rem=temp%10;
      sum+=rem;
      temp=temp/10;
    }

    if (sum%4==0)
    {
      n=a;
      break;
    }
    a++;
  }
  cout<<n<<endl;
  return 0;
}
