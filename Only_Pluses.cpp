/*Unsolved : I think the process is increasing minimum numbers much as possible to highest equal range, here i did it until maximum value but this is wrong. like for tc: 2 3 4, increasing both 2 and 3 to 5 is the solution as per problem description (cz its higheset possible digit to achieve). 7/9/25*/

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
        int a, b, c, five = 5, ans = 1;
        cin >> a >> b >> c;
        vector<int> vec(3);
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        int min_val = *min_element(vec.begin(), vec.end());
        int max_val = *max_element(vec.begin(), vec.end());
        while (min_val < max_val)
        {
            min_val++;
            five--;
            if (five == 0)
                break;
        }
        ans *= min_val * max_val;
        if (five > 0)
        {
            vec.erase(min_element(vec.begin(), vec.end()));
            *min_element(vec.begin(), vec.end()) += five;
        }
        vec.erase(max_element(vec.begin(), vec.end()));
        if (vec.size() > 1)
            vec.erase(min_element(vec.begin(), vec.end()));
        cout << ans * vec[0] << endl;
    }
}