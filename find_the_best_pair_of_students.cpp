
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& scores, int target) {
        for (int i = 0; i < scores.size(); i++) {
            for (int j = i + 1; j < scores.size(); j++) {
                if (scores[i] + scores[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

int main() {
    vector<int> scores = {2, 7, 11, 15};
    int target = 9;

    Solution obj;
    vector<int> ans = obj.twoSum(scores, target);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}
