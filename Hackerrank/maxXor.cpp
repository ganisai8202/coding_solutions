#include<bits/stdc++.h>
using namespace std;

string maxXorValue(string x, int k) {

    string y="";
    int count=0;

    for(int i=0;i<x.length() && count<k;i++)
    {
        if(x[i]=='0'){
            y.append("1");
            count++;
        }
        else
            y.append("0");
    }
    if(x.length()!=y.length())
    {
        int diff=x.length()-y.length();
        for(int i=0;i<diff;i++)
            y.append("0");
    }
    return y;

}

int main()
{
    string y=maxXorValue("01010",1);
    cout<<y<<endl;
}
