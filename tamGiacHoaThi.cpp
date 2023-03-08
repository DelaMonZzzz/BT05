#include <iostream>
#include <cmath>

using namespace std;

void draw (int a)
{
    for (int y = a-1; y >= 0; y--)
    {
        for (int x = 1-a; x < a; x++)
        {
            if (abs(x) + abs(y) <= a-1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a;
    cin >> a;
    draw(a);

    return 0;
}
