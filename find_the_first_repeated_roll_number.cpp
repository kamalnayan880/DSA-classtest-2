
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& rollNumbers) {
    unordered_set<int> seen;

    for (int num : rollNumbers) {
        if (seen.find(num) != seen.end()) {
            return true;
        }

        seen.insert(num);
    }

    return false;
}

int main() {
    vector<int> rollNumbers = {1, 2, 3, 1};

    if (containsDuplicate(rollNumbers)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
