class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int size = 1;
        while (size<=s.length()/2) {
            int a=0;
            int b=a+size;
            bool result = true;
            while (b<s.length()) {
                if (s.substr(a,size)!=s.substr(b,size)) {
                    result = false;
                    break;
                }
                a+=size;
                b+=size;
            }
            if (result) {
                return true;
            }
            size++;
        }
        return false;
    }
};