#include <iostream>
using namespace std;

int main() {
    int num[30]={0},n=0, i=0, temp=0;

    cout << "How many number(s) you want to enter: ";
    cin >> n;
    cout << endl;
    cout << "Enter " << n << " numbers\n";
    for(i=0; i<n; i++){
    cin >> num[i];        
    }
    for(i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(num[i]<num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(i = 0; i<n ; i++){
        cout << num[i] << " ";
    }
}