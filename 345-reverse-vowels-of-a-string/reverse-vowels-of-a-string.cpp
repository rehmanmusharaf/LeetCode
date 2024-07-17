class Solution {
public:
    std::string reverseVowels(std::string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            // Move left pointer to the next vowel
            while (left < right && !isVowel(s[left])) {
                left++;
            }
            // Move right pointer to the previous vowel
            while (left < right && !isVowel(s[right])) {
                right--;
            }
            // Swap the vowels
            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }

private:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};