#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int x = 1, y = 2, z = 2;
    int sum = 0;
    int n;

    cin >> n;

    vector<int> fib(n);

    for(int i = 0; i < n; i++)
        cin >> fib[i];

    for(int i = 0; i < n; i++) {
        int fib_number = fib[i];
        sum = 0;

        x = 1;
        y = 2;
        z = 2;

        while (z < fib_number) {
            if (z % 2 == 0) {
                sum += z;
            }

            z = x + y;
            x = y;
            y = z;
        }

        cout << sum << endl;
    }

    return 0;
}
