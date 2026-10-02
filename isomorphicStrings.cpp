#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> tToS;
        unordered_map<char, char> sToT;
        

        for(int i = 0; i < s.size(); i++){
            char a = s[i], b = t[i];

            if(sToT.count(a) && sToT[a] != b) return false; //checks if a is present and is already assigned to a character that isn't t[i].
            if(tToS.count(b) && tToS[b] != a) return false;//checks if b is present and is already assigned to a character that isn't s[i].

            sToT[a] = b;
            tToS[b] = a;
        }

        return true;
    }

    /**
       bool isIsomorphic(string s, string t) {
            char map_s[128] = {0};
            char map_t[128] = {0};
            for (int i = 0; i < s.size(); i++) {
                if (map_s[s[i]]!=map_t[t[i]])
                return false;
                map_s[s[i]] = i + 1;
                map_t[t[i]] = i + 1;
            }
            return true;
        }   
        Optimized Code ^
     */
};

int main(){
    Solution sol;
    string s, t;
    cin>>s>>t;

    cout<<sol.isIsomorphic(s,t);

    return 0;
}