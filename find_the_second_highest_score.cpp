
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondHighest(vector<int>& scores) {
    int first = INT_MIN;
    int second = INT_MIN;

    for (int score : scores) {
        if (score > first) {
            second = first;
            first = score;
        }
        else if (score < first && score > second) {
            second = score;
        }
    }

    if (second == INT_MIN) {
        return -1;
    }

    return second;
}

int main() {
    vector<int> scores = {8, 3, 5, 8, 6};

    cout << secondHighest(scores) << endl;

    return 0;
}
