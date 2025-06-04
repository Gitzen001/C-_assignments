void numbers(int a = 5, int b = 6){
    cout << "This is number " << a << " and " << b;
    cout << endl;
}
int main(){
    numbers(0, 2);
    numbers();
}