//      Name: Brayden Birt
//      Date: 04/05/23
// File name: lab10.cc


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
using namespace std;

//Prototypes


int main() {

    ifstream ins;
    ofstream outs;
    ins.open("text.txt");
    
    if (ins.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }

    outs.open("output.txt");
    if (outs.fail())
    {
        cout << "Error" << endl;
        exit(0);
    }

    char charInTxt;
    ins.get(charInTxt);
    while (!ins.eof())
    {
        if(islower(charInTxt)){
            char upperCh;
            upperCh = toupper(charInTxt);
            outs << upperCh;
        }
        else if(isupper(charInTxt)){
            outs << charInTxt;
        }
        else if(charInTxt == '0' || charInTxt == '1' || charInTxt == '2' || charInTxt == '3' || charInTxt == '4' || charInTxt == '5' || charInTxt == '6' || charInTxt == '7' || charInTxt == '8' || charInTxt == '9'){
            outs << '*';
        }
        else{
            outs << charInTxt;
        }

        ins.get(charInTxt);
    }

    ins.close();
    outs.close();
    return 0;
}