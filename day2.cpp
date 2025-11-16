class Solution {
public:
char findTheDifference(string s, string t) {
    map<char,int>mapS;
    map<char,int>mapT;
    for(int i=0;i<s.length();i++) {
        ++mapS[s[i]];
    }
    for(int i=0;i<t.length();i++) {
        ++mapT[t[i]];
    }
    for (auto i : mapT) {
        if (mapS[i.first]!=i.second) {
            return i.first;
        }
    }
    return 'a'; // fallback
}
};