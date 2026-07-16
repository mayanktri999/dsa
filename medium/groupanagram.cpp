#include<vector>
#include<unordered_map>
#include<algorithm> 
#include<string>
using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        int n = strs.size();
        vector<bool> visited(n, false);
        vector<vector<string>> ans;

        for (int i = 0; i < n; i++) {

            if (visited[i]) continue;

            vector<string> group;
            string temp = strs[i];
            sort(temp.begin(), temp.end());

            group.push_back(strs[i]);
            visited[i] = true;

            for (int j = i + 1; j < n; j++) {

                if (visited[j]) continue;

                string curr = strs[j];
                sort(curr.begin(), curr.end());

                if (temp == curr) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(group);
        }

        return ans;
    }
};