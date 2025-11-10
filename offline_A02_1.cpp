#include <iostream>
using namespace std;

int main() {
    double Seitenlaenge;
    cout<<"Bitte geben Sie die Seitenlaenge ein (in cm): ? ";
    cin>>Seitenlaenge;
    cout<<"Der Umfang des Quadrats betraegt (in cm): "<<Seitenlaenge*4<<endl;
    cout<<"Die Flaeche des Quadrats betraegt (in cm*cm): "<<Seitenlaenge*Seitenlaenge<<endl;

    system("pause");
    return 0;
}