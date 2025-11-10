#include <iostream>
#include <string>
using namespace std;

int main() {
    int B=0,H=0,L=0,C=0,j=0,x=0;
    string ch="";
    cout<<"Bitte geben Sie die Breite des Parallelogramms ein: ? ";

    cin>>B;
    cout<<"Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
    cin>>H;
    L=H;
    C=B+(L-1);
    string array[L][C];
    for(int i=0;i<L;i++){
        j=i;
        x=B;
        do
        {
           if((j>i && j<(i+B)-1) && (i>0 && i<(L-1))){
            array[i][j]="+";

           }
           else{
            array[i][j]="*";
           }
           
           x--;
           j++;
        } while (x>=1);
        
    }
    //ausfullen mit .
    for(int i=1;i<L;i++){
        for(int j=0;j<i;j++){
            array[i][j]=".";
        }
    }


    for(int i=0;i<L;i++){
        ch="";
        for(int j=0;j<C;j++){
            ch=ch+array[i][j];

         }
        cout<<ch<<endl;
        
    }
    cout<<"\n";
    system("PAUSE");
    return 0; 
}