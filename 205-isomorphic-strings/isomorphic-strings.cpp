class Solution {
public:
    bool isIsomorphic(string s, string t) {
   if (s.length() != t.length()) return false;

        unordered_map<char, char> mapS2T, mapT2S;

        for (int i = 0; i < s.length(); ++i) {
            char c1 = s[i];
            char c2 = t[i];

            // Check s -> t mapping
            if (mapS2T.count(c1)) {
                if (mapS2T[c1] != c2) return false;
            } else {
                mapS2T[c1] = c2;
            }

            // Check t -> s mapping
            if (mapT2S.count(c2)) {
                if (mapT2S[c2] != c1) return false;
            } else {
                mapT2S[c2] = c1;
            }
        }

        return true;
    }
};