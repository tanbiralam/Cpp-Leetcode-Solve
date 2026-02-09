class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        int i = 0;

        while (true) {
            if (i >= strs[0].size())
                break;
            char current = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].size() || strs[j][i] != current) {
                    return strs[0].substr(0, i);
                }
            }

            i++;
        }

        return strs[0].substr(0, i);
    }
};
