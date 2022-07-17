#include <iostream>
using namespace std;

int main() {
	int t,s,w1,w2,w3,i,j,sum;
	int mid,end;
	int wid[3];
	int steps[70];
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>s>>w1>>w2>>w3;
	    steps[i]=0;
	    if(w1==w2 && w2==w3)
	        {
	            mid=2*w1;
	            end=3*w1;
	            if(end<=s)
	                steps[i]=1;
	            else if(mid<=s)
	                steps[i]=2;
	            else
	                steps[i]=3;
	        }
	    else
	    {
	        wid[0]=w1;wid[1]=w2;wid[2]=w3;
	        sum=0;
	        steps[i]=0;
	        for(j=0;j<3;j++){
	            sum+=wid[j];
	            if(sum>s){                 //if sum>s the bricks boke at the previous
                  steps[i]+=1;              //width so step+1 and set j to the decrease,
	                j=j-1;                    //reset sum
	                sum=0;
	           // cout<<steps[i]<<" "<<sum<<" "<<j<<'\n';
	            }

	        }
	       if (sum>0)
	        steps[i]+=1;          //if last element is less than s


	   }
	}
	for(i=0;i<t;i++)
	    cout<<steps[i]<<'\n';
	return 0;
}
