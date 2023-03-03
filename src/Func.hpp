#include<iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

double generateID(void)
{
    double id, unicode, code;
    double cont_min = 01;
    double cont_max = 99;
    ofstream fout("../lib/UNICODE.data");

    cout << "Insira o ID: " << endl;
    cin >> id;
    cout << "ID: " << id << endl;
    
        code = id * 3;
        unicode = code * 10;
        code = unicode * 5;
        unicode = code * 2;
        code = unicode / 2.0;
        unicode = (code * 3) * 4;

        cout << "UNICODE Gerado!!!" << endl;
        cout << "UNICODE: " << unicode << endl;
        fout << unicode;
    

    return 0.0;

}

//Gerar UNICODE.
double generateUNICODE(void){
    double ID, UNICODE, CODE;

    ofstream fout("UNICODE.data");

    cout << "Insira o ID: " ;
    cin >> ID;
    cout << "ID :" << ID << endl;

    cout << "Gerando UNICODE...." << endl;

    CODE = ID * 3;
    UNICODE = CODE * 10;
    CODE = UNICODE * 5;
    UNICODE = CODE * 2;
    CODE = UNICODE / 2.0;
    UNICODE = (CODE * 3) * 4;

    cout << "UNICODE Gerado!!!" << endl;
    cout << "UNICODE: " << UNICODE << endl;
    fout << UNICODE;
    
    return 0;
}

//Limpar tela.
void clear(){
    #ifdef _WIN32
        system("cls");
    #endif
    #ifdef __linux__
        system("clear");
    #endif
}