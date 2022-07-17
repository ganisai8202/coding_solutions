#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    for(auto itr=nums.begin();itr!=nums.end()-1;itr++){
        auto k=itr+1;
        while(k!=nums.end()&&*itr==*k )
            k++;
        nums.erase(itr+1,k);

    }
// Alternate solution
//     public int removeDuplicates(int[] nums) {
//     if (nums.length == 0) return 0;
//     int i = 0;
//     for (int j = 1; j < nums.length; j++) {
//         if (nums[j] != nums[i]) {
//             i++;
//             nums[i] = nums[j];
//         }
//     }
//     return i + 1;
// }

    for(auto itr:nums)
        cout<<itr<<endl;
    return nums.size();

}

int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int n=removeDuplicates(nums);
    cout<<n<<endl;
}
