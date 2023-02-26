#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

float generateUNICODE();
float generateID();
void clear();
void continu();
int OPC;
bool nex;

int main(){
    do
    {       
        cout << "[ 1 ] GERAR UNICODE" << endl << "[ 2 ]GERAR ID" << endl;
        cin >> OPC;
        switch (OPC)
        {
        case 1:
            clear();
            generateUNICODE();
            continu();
            break;
        case 2:
            clear();
            generateID();
            continu();
            break;
        default:
            clear();
            cout << "Opçao Invalida!!!" << endl << "Tente Novamente......\n";
            continu();
            break;
        }
        continue;
    }while (nex == true);
}

//Funçao de parada (while).
void continu(){
    char pc;
    cout << "Deseja Continuar ?" << endl << "[ S ]Sair\n[ C ]Continuar : ";
    cin >> pc;
    pc = tolower(pc);
    switch (pc)
    {
    case 'c':     
        clear();
        nex = true;
        break;
    case 's':
        clear;
        nex = false;
        break;
    default:
        clear();
        nex = true;
        break;
    }
}

//Gerar UNICODE.
float generateUNICODE(void){
    float ID, UNICODE, CODE;

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

//Gerar ID.
float generateID(){
    int base, CODE, ID;

    cout << "Insira um numero base [5DIGITOS]: ";
    cin >> base;

    ofstream fout("ID.data");

    CODE = base * 3;
    ID = CODE * 2;
    CODE = ID * 5;
    ID = CODE * 2;
    CODE = ID / 2.0;
    ID = (CODE * 3) * 4;
    cout << ID <<  endl;
    fout << endl << ID << endl;
    
    return 0.0;
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
