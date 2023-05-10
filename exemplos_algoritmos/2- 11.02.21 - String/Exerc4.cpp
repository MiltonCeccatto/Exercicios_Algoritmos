#include <iostream>
#include <clocale>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string texto;
    char caractere;
    char v[] = "aeiouAEIOU";
    char c[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int totalC = 0, totalB = 0, totalVog = 0, totalCon = 0, totalN = 0, totalEsp = 0;

    cout << "Informe um texto: ";
    getline(cin, texto);

    totalC = texto.size();

    cout << texto << endl;

    for(int i = 0; i < texto.size(); i++){
        if(isspace(texto[i]))
            totalB++;

         for(int j = 0; j < sizeof(v); j++) {
            if(texto[i] == v[j])
                totalVog++;
            if(texto[i] == c[j])
                totalCon++;
        }

        if(isdigit(texto[i]))
            totalN++;

        if(isalnum(texto[i]) == 0)
            totalEsp++;
    }

    totalEsp = totalEsp - totalB;

    cout << "Total de caracteres: " << totalC << endl;
    cout << "Total de espaços em branco: " << totalB << endl;
    cout << "Total de vogais: " << totalVog << endl;
    cout << "Total de consoantes diferentes: " << totalCon << endl;
    cout << "Total de números: " << totalN << endl;
    cout << "Total de caracteres especiais: " << totalEsp << endl;
}
