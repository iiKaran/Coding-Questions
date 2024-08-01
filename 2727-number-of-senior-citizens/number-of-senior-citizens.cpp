class Solution {
private:
    static const int AGE_THRESHOLD = 60;
    static const char TENS_DIGIT_THRESHOLD = '6';
    static const int AGE_TENS_INDEX = 11;
    static const int AGE_ONES_INDEX = 12;
    
    bool isOverSixty(const string& passenger) {
        char tensDigit = passenger[AGE_TENS_INDEX];
        if (tensDigit > TENS_DIGIT_THRESHOLD) {
            return true;
        }
        if (tensDigit == TENS_DIGIT_THRESHOLD) {
            return passenger[AGE_ONES_INDEX] > '0';
        }
        return false;
    }

public:
    int countSeniors(vector<string>& details) {
        int seniorCount = 0;
        for (const auto& passenger : details) {
            if (isOverSixty(passenger)) {
                seniorCount++;
            }
        }
        return seniorCount;
    }
};