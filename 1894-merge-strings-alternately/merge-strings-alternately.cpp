class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string res = "";
        int n = word1.size();
        int m = word2.size();
        while (i < n || j < m) {
            if (i < n) {
                res += word1[i];
                i++;
            }
            if (j < m) {
                res += word2[j];
                j++;
            }
        }
        return res;
    }
};

// string merge;
// int i, j, k;
// i = j = k = 0;
// while (i < word1.length() && j < word2.length())
// {
//     merge.push_back(word1[i++]);
//     merge.push_back(word2[j++]);
// }
// while (i < word1.length())
//     merge.push_back(word1[i++]);
// while (j < word2.length())
//     merge.push_back(word2[j++]);

// return merge;