#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        int left = 1, right = n;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                p[i] = left++;
            } else {
                p[i] = right--;
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

}
