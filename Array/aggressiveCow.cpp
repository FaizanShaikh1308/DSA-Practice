#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& vec, int N, int C, int minAllowDist) {
    int Cow = 1;  // first cow placed at first stall
    int lastStallPos = vec[0];

    for (int i = 1; i < N; i++) {
        if (vec[i] - lastStallPos >= minAllowDist) {
            Cow++;
            lastStallPos = vec[i];
        }
        if (Cow == C) return true;
    }
    return false;
}

int getDistance(vector<int>& vec, int N, int C) {
    sort(vec.begin(), vec.end());

    int st = 1;
    int end = vec[N - 1] - vec[0];
    int ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(vec, N, C, mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> vec = {1, 2, 8, 4, 9};
    int N = 5;
    int C = 3;
    cout << getDistance(vec, N, C);
    return 0;
}
