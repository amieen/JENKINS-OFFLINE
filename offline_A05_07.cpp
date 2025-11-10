#include <iostream>
#include<string>
using namespace std;

int main() {
    int k=0;
    string eingabe="";
    string array[4];
    for (int i = 0; i < 4; i++)
    {
        cout<<"Textzeile = ? ";
        getline(cin,eingabe);
        if (eingabe=="")
        {
            break;
        }
        else{
            array[i]=eingabe;
            k++;
        }
        
    }
    if(k!=0){
        size_t max=0;
        for (int i = 0; i < k; i++)
        {
            if(array[i].length()>max){
                max=array[i].length();
            }
            /* code */
        }
        if(k==1){
            cout<<array[0]<<endl;
        }
        else{
            for (int i = 0; i < k; i++)
            {   
                size_t len=array[i].length();
                if(len<max){
                    for (size_t i = 0; i < (max-len); i++)
                    {
                        cout<<'#';
                    }
                    cout<<array[i]<<endl;
                    
                }
                else{
                    cout<<array[i]<<endl;
                }
            }
            
        }
        
    }
    

    system("pause");
    return 0;
}