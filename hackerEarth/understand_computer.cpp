#include<iostream>
#include<math.h>

using namespace std;


int countBits(long long int n)
{
  return (int)log2(n)+1;
}

int main()
{
  int T;
  long long int X,D,result;
  cin>>T;
  int bitD,bitResult;
  for(int i=0;i<T;i++)
  {
    cin>>X;

    D=1;
    while(true)
    {
        result=X/D;
        bitResult=countBits(result);
        bitD=countBits(D);
        if(bitResult<=bitD)
          break;
        D++;

    }
    cout<<(X-D+1)<<endl;



  }
return 0;
}
