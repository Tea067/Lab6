#include <iostream>
using namespace std;

int main() {
    int num, n = 0, o = 0;
    
    while ( true ){
        cout << "Enter an integer: ";
        cin >> num;
        if ( num == 0){
            break;
        } else {
            if ( num%2 == 0 ){
            n = n+1;
        } else {
            o = o+1;
        }
        }
    }
    
    cout << "#Even numbers = " << n << endl;
    cout << "#Odd numbers = " << o << endl;

    return 0;
    
}