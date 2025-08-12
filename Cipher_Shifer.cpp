#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string question;
        cin >> question;
        vector<char> answer;
        int i = 0;
        char pointer = question[0];
        while (i < (n - 1))
        {
            if (question[i + 1] == pointer)
            {
                answer.push_back(pointer);
                pointer = question[i + 2];
                i += 2;
            }
            else
                i++;
        }
        for (char ch : answer)
            cout << ch;
        cout << endl;
    }
}