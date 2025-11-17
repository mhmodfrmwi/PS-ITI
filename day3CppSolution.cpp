class Solution {
public:
    int strStr(string haystack, string needle) {

        return haystack.find(needle)<haystack.size()?haystack.find(needle):-1;
    }
};