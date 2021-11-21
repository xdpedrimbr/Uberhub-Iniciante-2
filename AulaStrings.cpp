#include <bits/stdc++.h>
using namespace std;
    /*
        1- Leitura de uma string sem espacos
        2- Contar a quantidade de vezes que a letra 'e' aparece (Duas maneiras)
        3- Verificar se a string é palindroma
        4- Ler outra string e concatenar com a primeira
    */
int main(){
    string str;
    //1
    cin >> str; //getline(cin, str)

    //2
    int qtdE = count(str.begin(), str.end(), 'e');
    cout << "Quantidade de letras 'e' usando a funcao: " << qtdE << endl;

    int qtdE2 = 0;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'e'){
            qtdE2++;
        }
    }
    cout << "Quantidade de letras 'e' sem usar a funcao: " << qtdE2 << endl;

    //3
    string copia;
    copia = str;

    reverse(copia.begin(), copia.end());
    cout << copia << endl;
    if(copia == str){
        cout << "eh palindroma" << endl;
    }else{
        cout << "nao eh palindroma" << endl;
    }

    //4
    string str2;
    cin >> str2;
    str.append(str2);
    cout << str << endl;
}