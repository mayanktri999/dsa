#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr =0;
        int maxaltitude = 0;
        for(int g :gain)
        {
            curr +=g;
            maxaltitude = max(maxaltitude,curr);

        }
        return maxaltitude;
        
    }
};