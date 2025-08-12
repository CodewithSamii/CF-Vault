#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string result;
    for (int i = 0; i < s.size(); ) {
        if (s.substr(i, 3) == "WUB") {
            if (!result.empty() && result.back() != ' ')
                result += ' ';
            i += 3;
        } else {
            result += s[i++];
        }
    }

    if (!result.empty() && result.back() == ' ') result.pop_back();
    cout << result << endl;
}
