#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = -1, secondIndex = -1; bool end = false;
        vector<int> found(2, -1);
        
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target && firstIndex == -1){
                firstIndex = i;
            }
            else if(nums[i] == target){
                count++;
            }
        }

        secondIndex = firstIndex + count;
        
        if(firstIndex == -1) return found;
        else{
            found[0] = firstIndex; found[1] = secondIndex;
        }
        return found;
    }
};

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    int target; cin>>target;
    
    sort(arr.begin(), arr.end());

    Solution s;
    vector<int> result = s.searchRange(arr, target);
    for(int i = 0; i < result.size(); i++) cout<<result[i]<<" ";

    return 0;
}