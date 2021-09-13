#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int>arr;


int trY(int index, int sum, int taken) {
    if (taken == m)
        return sum;

    if (index == n) {
        if (taken == m)
            return sum;

        return 0;
    }

    return max(trY(index + 1, sum, taken), trY(index + 1, sum ^ arr[index], taken + 1));
}

int main()
{
    int t;
    cin >> t;
    while (t-- != 0)
    {
        cin >> n >> m;

        arr.clear();
        arr.resize(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        cout << trY(0, 0, 0) << endl;
    }

    return 0;
}