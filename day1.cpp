class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string s;
    int size=word1.size()>word2.size()?word1.size():word2.size();
    int i=0;
    while (size--) {
        if (i<word1.size()) {
            s.push_back(word1[i]);
        }
        if (i<word2.size()) {
            s.push_back(word2[i]);
        }
        i++;
    }
    return s;
}
};