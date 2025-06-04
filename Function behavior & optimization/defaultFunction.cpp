#include<iostream>
using namespace std;
// void number(int = 5, int = 10);
// int main(){
//     number(2);
// }
// void number(int a, int b){
//  cout << "This is number " << a << " and " << b;
//     cout << endl;
// }
void numbers(int a = 5, int b = 6){
    cout << "This is number " << a << " and " << b;
    cout << endl;
}
int main(){
    numbers(0, 2);
    numbers();
}

