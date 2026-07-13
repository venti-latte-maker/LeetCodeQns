#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0; i < nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        double median = 0.0;
        int mid = 0;

        if(nums1.size() % 2 == 0){
            mid = nums1.size() / 2;
            median = (double(nums1[mid]) + double(nums1[mid-1])) / 2.0;
        }
        else{
            mid = nums1.size() / 2;
            median = nums1[mid];
        }

        return median;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1, 3}; //example
    vector<int> nums2 = {2, 4};

    cout<<s.findMedianSortedArrays(nums1, nums2);
}