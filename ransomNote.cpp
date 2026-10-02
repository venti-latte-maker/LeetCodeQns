#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> chars;
        for(char c: magazine) chars[c]++;

        for(char c : ransomNote){
            if(chars.empty()) return false;
            if(chars.count(c)){
                chars[c]--;
                if(chars[c] == 0) chars.erase(c);
            }
            else{
                return false;
            }
        }

        return true;
    }

    /**
     * bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);

        for (char c : magazine)
            count[c - 'a']++;

        for (char c : ransomNote) {
            if (--count[c - 'a'] < 0)
                return false;
        }

        return true;
    }

        Optimized Solution^
     */
};

int main(){
    Solution s;
    string ransomNote, magazine;
    cin>>ransomNote, magazine;
    cout<<s.canConstruct(ransomNote, magazine);
}