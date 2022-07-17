class Solution {
public:
    bool canChange(string start, string target) {
        int m=0,n=0;
        int l=target.length();
        while(n<l){
            while(n<l && target[n]=='_') n++;
            while(m<l&& start[m]=='_') m++;
            if(m==l && n!=l)
                return false;
            if(start[m]!=target[n])
                return false;
            if((target[n]=='L' && m<n) || (target[n]=='R' && m>n))
                return false;
            m++,n++;
        }
        while(m<l){
            if(start[m]!='_')
                return false;
            m++;
        }
        return true;
        
    }
};