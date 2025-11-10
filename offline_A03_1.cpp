#include <iostream>
using namespace std;

int main() {
    char Zeichen;
    cout << "Bitte geben Sie das Zeichen ein: ? ";
    cin >> Zeichen;

    if (Zeichen >= 'a' && Zeichen <= 'z') {
        cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben."<<endl;
    } else {
        cout << "KEIN Kleinbuchstabe (a-z)."<<endl;
    }
    system("PAUSE");
    return 0; 
}