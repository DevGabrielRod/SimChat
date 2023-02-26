#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

//PROTOTIPAÇÕES DE FUNÇÕES
bool connect(string entrada);
bool criar(string entrada1, string entrada2);
void confPerf();
void enviar(string entrada);
void verificador(string entrada);
void comandos(string entrada);
void LIMPA();

//VARIÁVEIS GLOBAIS
bool connected = false;
string serverAdress;
string userName = "Lucas";
string userID;
string userFix;
bool mensgON = false;
bool sair = false;

int main(){

    string userInput = "mensagem";
    string serverInfo[2];
    string userChoice;
    bool choiceLoop = true;
    
    

    while(true){
        
            while(!(userChoice == "1") && !(userChoice == "2") && !(userChoice == "entrar") 
            && !(userChoice == "criar") && !(userChoice == "3") && !(userChoice == "perfil") &&
            !(userChoice == "4") && !(userChoice == "sair")){/*ESCOLHAS*/
                LIMPA();
                cout << "1.Entrar em uma sala 2. Criar uma sala 3.Configurações de peril 4.Sair" << endl << endl;
                getline(cin,userChoice);
                if(userChoice == "1" || userChoice == "entrar"){
                    LIMPA();
                    cout << "Nome do servidor: ";
                    getline(cin,userInput);
                    if(connect(userInput)){
                    mensgON = true;}else{
                        userChoice = "abacaxi";
                    }
                }

                if(userChoice == "2" || userChoice == "criar"){
                    LIMPA();
                    cout << "Nome do servidor: ";
                    getline(cin,serverInfo[0]);
                    cout << "ID do servidor: ";
                    getline(cin,serverInfo[1]);
                    if(criar(serverInfo[0], serverInfo[1])){
                    mensgON = true;}else{
                        userChoice = "morango";
                    }
                    
                }

                if(userChoice == "3" || userChoice == "perfil"){
                    LIMPA();
                    confPerf();
                    LIMPA();
                    userChoice = "again";
                }

                if(userChoice == "4" || userChoice == "sair"){
                    sair = true;
                }

                /******
                 * 
                 * TODO: CRIAR UM WHILE COM GETLINE(PARA PEGAR A LINHA) E EM SEGUIDA VARRER AS
                 * STRINGS E IDENTIFICÁ-LAS
                 * 
                fstream leituraDados;
                //leituraDados.unsetf( ios::skipws);
                leituraDados.open("userPerfil.txt",ios::in);
                //leituraDados.unsetf(std::ios_base::skipws);
                leituraDados >> std::noskipws;    
            
                if(leituraDados.is_open()){    
                    string textoDados;
                    
                    
                    leituraDados >> textoDados;
                    cout << textoDados; 
                    cout << endl;

                    /*userName =;
                    userID =;
                    userFix=;
                }
                leituraDados.close();
                ******/
            }

            if(mensgON == true){
            LIMPA();
            cout << "Bem vindo ao chat :D " << endl << endl;
            }
            
            while(mensgON){ //mensagens
                cout << ">";
                getline(cin,userInput);
                verificador(userInput);
                /*if(userInput == "sair"){//Flag
                mensgON = false;
                sair = true;
                break;}*/
            }
                
            
            
        if(sair == true)
        break;
    }

    return 0;
}
void LIMPA(){
    #ifdef _WIN32
        system("cls");
    #endif
    #ifdef __linux__
        system("clear");
    #endif
}
bool connect(string entrada){
    cout << "connecting..." << endl;
    string name = "../Server/" + entrada + ".txt";
    fstream outServer;
    string texto;
    outServer.open(name, ios::in);

    if(outServer.is_open()){
        while(getline(outServer,texto)){
        cout << texto;
    }
    cout << endl;
    outServer.close();
    serverAdress = name;
    return true;
    }else{
        cout << "Não foi possível conectar com o servidor." << endl;
        return false;
    }
    
    
}
bool criar(string entrada1, string entrada2){
    string name = "../Server/" + entrada1 + ".txt";

    fstream myServer;
    myServer.open(name, ios::out);
    if(myServer.is_open()){
    string texto = "Servername::@" + entrada1 + "#" + entrada2 +"**";
    myServer << texto;
    cout << "Descição: ";
    getline(cin,texto);
    myServer << "\nDescrição{" + texto +"}\n";
    myServer.close();
    serverAdress = name; 
    return true;
    }else{
        cout << "Não foi possível criar servidor." << endl;
        return false;
    }
}
void confPerf(){
    string resposta;
    //cout << "criando novo arquivo...";
    fstream perfil;
    perfil.open("userPerfil.txt", ios::out);
    if(perfil.is_open()){
        //LIMPA()
        cout << "Editar Perfil " << endl << endl;
        cout << "Nome: ";
        getline(cin,resposta);
        perfil << "name: " + resposta + "\n";
        cout << "ID: ";
        getline(cin,resposta);
        perfil << "id: " + resposta + "\n";
        cout << "Prefixo: ";
        getline(cin,resposta);
        perfil << "prefix: " + resposta + "\n";
        cout << "Novo arquivo criado com sucesso." << endl << endl;
        perfil.close();
    }else{
        cout << "falha ao abrir arquivo, vocẽ pode tentar novamente." << endl;
    }

}

void enviar(string entrada){
    string mensagem = entrada;
    fstream server;
    server.open(serverAdress, ios::app);
    if(server.is_open()){
        server << "@" + userName + ":" + mensagem + ";\n";
        server.close();
    }
}
void verificador(string entrada){
    if(entrada[0] == '/'){
        comandos(entrada);
    }else{
        enviar(entrada);
    }
}
void comandos(string entrada){
    string newText;
    for(int i = 0; i < entrada.size(); i++){
        entrada[i] = toupper(entrada[i]);
        
    }
    newText = entrada;
    if(newText == "/SAIR"){
        enviar(userName + " saiu...");
        mensgON = false;
        sair = true;   
    }
    if(newText == "/CLEAR"){
        LIMPA();
    }
}