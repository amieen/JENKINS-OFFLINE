#include <iostream>
#include <string>
using namespace std;


bool verif(string a){
    bool v=true;
    for(size_t i=0; i<a.length();i++){
        if(!(a.at(i)<='z' && a.at(i)>='a')){
            v=false;
        }
    }
    return v;
}

bool palindrome(string a[],string b){

    bool v=true;
    if(b.length()%2==0){
        size_t compt=(b.length())-1;
        for (size_t i = 0; i < b.length()/2; i++)
        {
            if (a[i]!=a[compt]){
                v=false;
            }
            compt--;
        }
        
    }
    else{
        size_t compt=(b.length())-1;
        for (size_t i = 0; i < (b.length()/2)-1; i++)
        {
            if (a[i]!=a[compt]){
                v=false;
            }
            compt--;
        }

    }
    return v;
}

int main() {
    
    string eingabe="";
    do{
        cout<<"Text: ? ";
        getline(cin,eingabe);
    }
    while(!(verif(eingabe)));
    string array[eingabe.length()];
    for(size_t i=0;i<eingabe.length();i++){
        array[i]=eingabe.at(i);
    }
    if(palindrome(array,eingabe)){
        cout<<"Das eingegebene Wort ist ein Palindrom."<<endl;
    }
    else{
        cout<<"Das eingegebene Wort ist KEIN Palindrom."<<endl;
    }


    system("pause");
    return 0;
}