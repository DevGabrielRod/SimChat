#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#ifdef WIN32
        #include <Windows.h>
        #else
        #include <unistd.h>
        #endif

using namespace std;

int main(){

    bool close = false;
    string serverAdress;
    fstream servidor;
    int count = 5; 
    string resp;
    while(!close){
        if(count >2){
            cout << "Nome do servidor: ";
            getline(cin,resp);
            serverAdress = "../Server/" + resp + ".txt";

            count = 0;
            if(resp == "sair"){
            close = true;
            }
        }
        servidor.open(serverAdress,ios::in);
        if(servidor.is_open()){
            cout << "Conectado. " << endl;
            close = true;
        }else{
            cout << "Conexão inexistente..." << endl;
            count++;
        }
 
        sleep(2);
        

    }
    servidor.close();
    return 0;
}