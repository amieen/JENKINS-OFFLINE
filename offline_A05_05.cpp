#include <iostream>
using namespace std;

int main() {

    int numb=0;
    int array[9]={0};
    int array2[6]={0};
    for (int i = 0; i < 6; i++)
    {
       array2[i]=i+1;
    }
    
    for (size_t i = 0; i < 9; i++)
    {
        do
        {
            cout<<"Bitte geben Sie die "<<i+1<<". Zahl ein: ? ";
            cin>>numb;
        } while (!(numb>=1 && numb<=6));
        array[i]=numb;
        for (int j = 0; j < 6; j++)
        {
            if(array2[j]==numb){
                array2[j]=0;
            }
        }
        
    }
    int k=0;
    for (int i = 0; i < 6; i++)
    {
        if (array2[i]==0)
        {
            k++;
        }
        
    }
    cout<<"In der Eingabe kamen "<<k<<" unterschiedliche Zahlen vor."<<endl;

    
    system("pause");
    return 0;
}