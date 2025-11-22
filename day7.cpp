class Solution {
public:
vector<int> plusOne(vector<int>& digits) {
    if (digits.back()<9) {
        digits.back()++;
    }
    else {
        digits.back()=0;
        for (int i=digits.size()-2; i>=0; i--) {
            if (digits[i]==9) {
                digits[i]=0;
            }
            else if (digits[i]<9) {
                digits[i]++;
                break;
            }
        }
    }
    if (digits.front()==0) {
        digits.front()++;
        digits.push_back(0);
    }
    return digits;
}
};