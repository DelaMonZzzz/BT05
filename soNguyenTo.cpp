#include <iostream>

using namespace std;

bool soNguyenTo(int n)
{
    if (n == 2) return true;
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0) return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    if (N == 2) return 0;
    for (int i = 2; i < N; i++)
    {
        if (soNguyenTo(i)) cout << i << " ";
    }

    return 0;
}
