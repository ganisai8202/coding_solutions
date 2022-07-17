#include<iostream>

using namespace std;
int symmetry(char a[][40],int n);
int main()
{
    int T,N,i,num,flag;
    char A[40][40];

    cin>>T;
    for(num=0;num<T;num++)
    {
        cin>>N;
        for(i=0;i<N;i++){
            cin>>A[i];
        }
        /**for(i=0;i<N;i++){
          for(j=0;j<N;j++)
            cout<<A[i][j]<<" ";
          cout<<endl;
        }**/
        flag=symmetry(A,N);
        if (flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
      }
  }

int symmetry(char a[][40],int n)
{
    int i,j,fl=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (a[i][j]=='1')
            {
                if((a[i][n-j-1]=='1') && (a[n-i-1][j]=='1')){
                    fl=1;
                    continue;}
                else{
                    fl=0;
                    return fl;
                }
            }
        }
    }
    return fl;
}
