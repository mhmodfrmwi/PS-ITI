class Solution {
     public int strStr(String haystack, String needle) {
        if (!haystack.contains(needle)) {
            return -1;
        }
        int index=Integer.MAX_VALUE;
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.charAt(i) == needle.charAt(0)) {
                boolean f=true;
                for (int j = 1; j < needle.length(); j++) {
                    if (haystack.charAt(i+j) != needle.charAt(j)) {
                        f=false;
                        break;
                    }
                }
                if (f) {
                    index = i;
                    break;
                }
            }
        }
        return index;
    }
}