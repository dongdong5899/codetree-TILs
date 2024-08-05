#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    string str[2];
    cin >> str[0] >> str[1];


    for (int i = 0; i < 2; ++i)
    {
        int strSum = 0;
        for (int j = 0; j < str[i].length(); ++j)
        {
            if (str[i][j] < 56 && str[i][j] >= 48)
            {
                strSum *= 10;
                strSum += str[i][j] - 48;
            }
        }
        sum += strSum;
    }

    cout << sum;
    return 0;
}