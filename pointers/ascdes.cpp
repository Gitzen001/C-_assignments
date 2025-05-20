#include <iostream>
using namespace std;

int main(){

    int n=0, num[50]={0}, i,j, temp = 0;
    int *p1, *p2;
    p1 = num;
    p2 = &temp;
    cout << "How many number you want to enter: ";
    cin >> n;
    cout << "Enter your number(s): "<<endl;
    for(i=0; i < n; i++){
        cin >> *(p1 + i);
    }
    for(i=0; i < n - 1; i++){
        for(j=0; j<n - i - 1; j++){
            if(num[j]>num[j + 1]){
                *p2 = num[j];
                num[j] = num[j + 1];
                num[j + 1] = *p2;
            }
        }
    }
    cout << "Numbers in ascending order: "<<endl;
    for(i = 0; i < n; i++){
        cout << *(p1 + i) << " ";
    }
    cout << endl;
    cout << "Numbers in descending order: "<<endl;
    for(i = n - 1; i >= 0; i--){
        cout << *(p1 + i) << " ";
    }
}