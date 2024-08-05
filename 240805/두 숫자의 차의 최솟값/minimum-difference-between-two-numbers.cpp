#include <iostream>
using namespace std;

int main() {

    int n, arr[10]{ 0, }, minDif = INT32_MAX;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        for (int j = 0; j < i; ++j)
        {
            minDif = min(abs(arr[j] - arr[i]), minDif);
        }
    }

    cout << minDif;
    return 0;
}