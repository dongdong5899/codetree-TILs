#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        sum += num;
    }
    int p = floor(log10(sum));
    sum = sum / (int)pow(10, p) + (sum % (int)pow(10, p)) * 10;
    
    cout.width(p + 1);
    cout.fill('0');
    cout << sum;
    return 0;
}