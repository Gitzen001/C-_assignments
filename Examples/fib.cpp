#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 0, b = 1, temp = 0;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << a << " ";
        temp = a + b;
        a = b;
        b = temp;
    }
    return 0;
}