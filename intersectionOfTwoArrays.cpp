#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> check;

        for(int i = 0; i < nums1.size(); i++){
            check[nums1[i]]++;
        }

        unordered_map<int, int> common;

        for(int i = 0; i < nums2.size(); i++){
            if(check.count(nums2[i])){
                common[nums2[i]]++;
            }
        }

        vector<int> intersection;

        for(auto& [num, count] : common){
            intersection.push_back(num);
        }

        return intersection;
        
    }
};

int main(){
    int n1, n2; cin>>n1>>n2;
    vector<int> nums1, nums2;
    for(int i = 0; i < n1; i++) cin>>nums1[i];
    for(int i = 0; i < n2; i++) cin>>nums2[i];

    Solution s;
    vector<int> ans = s.intersection(nums1, nums2);

    for(int n : ans) cout<<n<<" ";
    cout<<endl;  
}