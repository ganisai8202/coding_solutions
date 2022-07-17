#include<iostream>

using namespace std;

int main()
{
  int D,oc,of,od,cs,cb,cm,cd;
  long online_cost,classic_cost;
  cin>>D;
  cin>>oc>>of>>od;
  cin>>cs>>cb>>cm>>cd;
  if(of>=D)
    online_cost=oc;
  else
    online_cost=oc+(D-of)*od;

  classic_cost=cb+(D/cs)*cm+(cd*D);
  //online_cost=onlineCost(D);
  //classic_cost=classicCost(D);

  if (online_cost<=classic_cost)
    cout<<"Online Taxi"<<endl;
  else
    cout<<"Classic Taxi"<<endl;


}
