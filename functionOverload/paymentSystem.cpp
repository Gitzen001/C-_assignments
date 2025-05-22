#include <iostream>
using namespace std;

void makePayment(long long int n, int dd,int mm,int yy, int cvv){
cout << "Enter card number: ";
cin >> n;
cout << "Enter Expiry date"<<endl;
cout << "Day: ";
cin  >> dd;
cout << "Month: ";
cin  >> mm;
cout << "Year: ";
cin  >> yy;
cout << "Enter your CVV(Card Verification Value): ";
cin >> cvv;
 cout << "Processing Card Payment..." << endl;
    cout << "Card Number: " << n << endl;
    cout << "Expiry Date: " << dd <<"/" <<mm <<"/"<<yy << endl;
    cout << "CVV: " << cvv << endl;
cout << "Payment Successful!"<<endl;
}
void makePayment(int upiId){
cout << "Enter your UPI id: ";
cin >> upiId;
  cout << "Processing UPI Payment..." << endl;
    cout << "UPI ID: " << upiId << endl;
    cout << "Payment Successful!" << endl;
}
void makePayment(int walletId, int amount){
cout << "Enter your wallet id: ";
cin >> walletId;
cout << "Enter your amount: ";
cin >> amount;
    cout << "Processing Wallet Payment..." << endl;
    cout << "Wallet ID: " << walletId << endl;
    cout << "Amount: " << amount << endl;
    cout << "Payment Successful!" << endl;
}
int main(){
    char ch;
cout << "Welcome Customer!" <<endl;
cout << "How would you like to do your payment?"<<endl;
cout << "\nOptions:\na)Card Payment\nb)UPI payment\nc)Wallet Payment"<<endl;
cout << "Enter choice: ";
cin >> ch;
   switch (ch) {
        case 'a':
        case 'A':
        cout << "Card Payment selected." << endl;
            makePayment(0,0,0,0,0);
            break;
        case 'b':
        case 'B':
            cout << "UPI Payment selected." << endl;
             makePayment(0);
            break;
        case 'c':
        case 'C':
            cout << "Wallet Payment selected." << endl;
             makePayment(0,0);
            break;
        default:
            cout << "Invalid option!" << endl;
    }
}