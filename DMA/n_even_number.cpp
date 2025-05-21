// WAP to generate n number of even numbers.
#include <iostream>
using namespace std;

int main()
{

    int i = 0, n = 0;
    int *ptr;

    cout << "Enter number of terms: ";
    cin >> n;
    ptr = new int[n];

    if (ptr == NULL)
    {
        cout << "Memory Allocation Failed" << endl;
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        *(ptr + i) = i * 2;
        cout << *(ptr + i) << " ";
    }
    delete[] ptr;
    return 0;
}