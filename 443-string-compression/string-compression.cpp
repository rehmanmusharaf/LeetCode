#include <string>
class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;
        int j = 0;
        for (int i = 0; i < size(chars); i++) {
            char ch = chars[i];
            int count = 0;
            chars[j] = ch;
            cout << "chars[" << j << "]: " << chars[j] << endl;
            while (i < size(chars) && ch == chars[i]) {
                i++;
                count++;
            }
            ans++;
            j++;
            i--;
            if (count > 1) {
                cout << "j is: " << j << endl;
                // chars[j] = std::to_string(count);
    string cnt = to_string(count); // Convert integer to string
    for (char c : cnt) {
        chars[j] = c;
        j++;
        ans++;
    }
            }
        }
        return ans;
    }
};