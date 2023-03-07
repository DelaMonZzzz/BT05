#include <iostream>

using namespace std;

int UCLN(int m, int n)
{
    while(m*n != 0)
    {
        if (m > n) m = m % n;
        else n = n % m;
    }
    if (m + n == 1) cout << "yes";
    else cout << "no";
}

int main()
{
    int a, b;
    cin >> a >> b;
    UCLN(a, b);
    return 0;
}
