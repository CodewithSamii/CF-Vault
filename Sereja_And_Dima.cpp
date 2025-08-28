#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count_s = 0, count_d = 0;
    cin >> n;
    deque<int> vec(n);
    for (int i = 0; i < n; i += 1)
        cin >> vec[i];
    int j = 0;
    while (!vec.empty())
    {
        if (j % 2 == 0)
        {
            if (*vec.begin() > vec.back())
            {
                count_d += *vec.begin();
                vec.pop_front();
            }
            else
            {
                count_d += vec.back();
                vec.pop_back();
            }
        }
        else
        {
            if (*vec.begin() > vec.back())
            {
                count_s += *vec.begin();
                vec.pop_front();
            }
            else
            {
                count_s += vec.back();
                vec.pop_back();
            }
        }
        j++;
    }
    cout << count_d << " " << count_s << endl;
}

