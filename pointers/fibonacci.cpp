#include <iostream>
using namespace std;

int main(){

    int n = 0, a = 0, b = 1, temp = 0;
    int *p1, *p2, *t;
    p1 = &a, p2 = &b, t = &temp;

    cout << "Enter number of terms: ";
    cin >> n;
    cout << *p1 << " ";
    for(int i = 0; i < n; i++){
        *t = *p1 + *p2;
        *p1 = *p2;
        *p2 = *t;
        cout << *p1 << " ";
    }
}