#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sortedStrings;
        for(string s : strs){
            string str = s;
            sort(str.begin(), str.end());
            sortedStrings[str].push_back(s);    //cad or dca both becomes acd, and both of them get inserted into acd's location
        }

        vector<vector<string>> result;

        for(auto&[key, words] : sortedStrings){
            result.push_back(words);
        }

        return result;

    }
};

int main(){
    int n; vector<string> strs;

    cin>>n; for(int i = 0; i < n; i++) cin>>strs[i];

    Solution s;
    vector<vector<string>> result = s.groupAnagrams(strs);

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }

        cout<<endl;
    }

    return 0;
}