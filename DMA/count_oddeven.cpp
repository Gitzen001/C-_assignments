#include <iostream>
using namespace std;

int main()
{

    int odd = 0, even = 0, n = 0, i = 0;
    int *ptr;

    cout << "Enter number of terms: ";
    cin >> n;
    ptr = new int[n];

    if (ptr == NULL)
    {
        cout << "Memory Allocation Failed" << endl;
        return 1;
    }
    cout << "Enter your number(s): ";
    for (i = 0; i < n; i++)
    {
        cin >> *(ptr + i);
        if (*(ptr + i) % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "There are " << even << " even number(s)." << endl;
    cout << "There are " << odd << " odd number(s)." << endl;
    delete[] ptr;
}