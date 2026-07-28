class Solution {
public:
    int BasicDataType(string s) {
        if (s.length() == 1 && (s[0] < '0' || s[0] > '9')) {
            return 1;
        }
        
        size_t decimal_pos = s.find('.');
        if (decimal_pos != string::npos) {
            int digits_after_decimal = s.length() - decimal_pos - 1;
            if (digits_after_decimal > 5) {
                return 8;
            } else {
                return 4;
            }
        }
        
        return 4;
    }
};
