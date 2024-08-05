#include <iostream>
using namespace std;

int main() {

    int n, prev = 0, minDif = INT32_MAX;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        if (prev != 0) minDif = min(minDif, num - prev);
        prev = num;
    }

    cout << minDif;
    return 0;
}