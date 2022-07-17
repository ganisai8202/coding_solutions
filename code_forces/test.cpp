#include<bits/stdc++.h>
using namespace std;
class Poly{
public:
    int m_age;
    string m_name;

    Poly(int age,string name ):m_age{age},m_name{name}{
    }

};
int main(){
    Poly a(20,"sai");
    cout<<a.m_age<<" "<<a.m_name<<endl;

}
