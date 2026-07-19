#include <string>
#include <vector>
using namespace std;



class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        for (char c : ransomNote) {

            bool found = false;

            for (int i = 0; i < magazine.size(); i++) {

                if (magazine[i] == c) {
                    found = true;
                    magazine[i] = '#';   // Mark as used
                    break;
                }
            }

            if (!found)
                return false;
        }

        return true;
    }
};