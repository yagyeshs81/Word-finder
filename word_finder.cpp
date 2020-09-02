#include<iostream>
#include<string>
using namespace std;

int main() {
    cout<<"hello,in this game, I will find the word that you throgh. "<<endl<<"So How many letter in your word "<<endl;
    int n;
    cin>> n;
    cout<<"Row-1  A  B  C  D  E  F  G  H  I  "<<endl<<"Row-2  J  K  L  M  N  O  P  Q  R  "<<endl<<"Row-3  S  T  U  V  W  X  Y  Z  @"<<endl;

    string r;
    int h;
    int val[n];
    string c;
    int row;

    for (int N=1; N <= n; N++) {

        cout<<"Enter the row No. in which "<<N<<"st/nd/th letter of your word  "<<endl;
        cin>> val[N];


    }
    char al[n][9];
    cout<<"C0  C1  C2  C3  C4  C5  C6  C7  C8  "<<endl;
    for (int i=1; i<=n; i++) {
        if (val[i]== 1) {
            cout<<"A   B   C   D   E   F   G   H   I "<<endl;
            al[i][0]='A';
            al[i][1]='B';
            al[i][2]='C';
            al[i][3]='D';
            al[i][4]='E';
            al[i][5]='F';
            al[i][6]='G';
            al[i][7]='H';
            al[i][8]='I';

        }
        else if (val[i]==2)
        {
            cout<<"J   K   L   M   N   O   P   Q   R "<<endl;
            al[i][0]='J';
            al[i][1]='K';
            al[i][2]='L';
            al[i][3]='M';
            al[i][4]='N';
            al[i][5]='O';
            al[i][6]='P';
            al[i][7]='Q';
            al[i][8]='R';
        }
        else if (val[i]==3)
        {
            cout<<"S   T   U   V   W   X   Y   Z     "<<endl;
            al[i][0]='S';
            al[i][1]='T';
            al[i][2]='U';
            al[i][3]='V';
            al[i][4]='W';
            al[i][5]='X';
            al[i][6]='Y';
            al[i][7]='Z';
            
        }
     

    }
    int wrd[n];

    for (int i =1; i<= n; i++) {

        cout<<"Enter the culoum No. in which "<<i<<"st/nd/th letter of your word  "<<endl;
        cin>> wrd[i];
    }
    char wd[n];
    for (int i=1; i<=n; i++) {
        
            h=wrd[i];
            row = h;
            wd[i] = al[i][row];

        
    }
    for (int i = 1; i <= n; i++)
    {
        cout<<wd[i];
    }


}

