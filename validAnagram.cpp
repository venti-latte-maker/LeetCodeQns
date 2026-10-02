#include<unordered_map>
#include<iostream>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> countS;
        unordered_map <char, int> countT;
        
        if(s.size() != t.size()) return false;

        for(char c : s){
            countS[c]++;
        }
        for(char c : t){
            countT[c]++;
        }

        return countS == countT;

        

    }
};

int main(){
    Solution ans;
    string s, t;

    cin>>s>>t;
    cout<<ans.isAnagram(s,t);

    return 0;

}