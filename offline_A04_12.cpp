#include <iostream>
#include <string>
using namespace std;

int main() {
    string eingabe="";

    cout<<"Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";

        getline(cin,eingabe);
    string array[eingabe.length()];
    string new_zk="";

    for (size_t i = 0; i < eingabe.length(); i++)
    {
        if(eingabe.at(i)>='a' && eingabe.at(i)<='z'){
            new_zk=new_zk+eingabe.at(i)+eingabe.at(i);
        }
        else if(eingabe.at(i)>='A' && eingabe.at(i)<='Z'){
            new_zk=new_zk+eingabe.at(i)+eingabe.at(i)+eingabe.at(i);
        }
        else if(eingabe.at(i)>='0' && eingabe.at(i)<='9'){
            new_zk=new_zk+'.';
        }
        else if(eingabe.at(i)==' ' ){
            new_zk=new_zk+"_";
        }
        else if(eingabe.at(i)=='!' || eingabe.at(i)=='?' ){
            new_zk=new_zk;

        }
        else{
            new_zk=new_zk+eingabe.at(i);        }
    }
    
    cout<<"Der Text nach der Umwandlung: "<<new_zk<<endl;
    
        system("pause");
    return 0;
}