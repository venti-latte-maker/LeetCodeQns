#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> freq;
        for(int n : nums){
            freq[n]++;
        }

        vector<pair<int, int>> order(freq.begin(), freq.end());

        sort(order.begin(), order.end(), [](const auto& x, const auto& y){
            if(x.second != y.second) return x.second > y.second;
            else return x.first < y.first;
        });

        vector<int> result;
        
        for(auto& [key, val] : order){
            if(k == 0) break;
            result.push_back(key);
            k--;
        }

        return result;

    }
};

int main(){
    Solution sol;

    int n, k; cin>>n>>k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)cin>>nums[i];

    vector<int> result = sol.topKFrequent(nums, k);

    for(int n : result) cout<<n<<" ";

    return 0;
}