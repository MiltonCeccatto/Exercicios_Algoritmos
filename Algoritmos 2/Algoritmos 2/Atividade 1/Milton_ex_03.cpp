
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

main()
{
    setlocale(LC_ALL, "portuguese");

    char sexo;
    float altura, pesoIdeal, pesoAtual;


    cout << "Informe seu sexo: " << endl;
    cout << "M - Masculino" << endl;
    cout << "F - Feminino" << endl;
    cin >> sexo;
    cout << "Informe sua altura usando um . no lugar de , " << endl;
    cin >> altura;
    cout << "Informe seu peso atual usando um . no lugar de ," << endl;
    cin >> pesoAtual;

    if (sexo == 'm'){
        pesoIdeal = (72.7*altura) - 58;
    } else if (sexo == 'f')
       pesoIdeal = (62.1*altura) - 44.7;

    if (pesoAtual > (pesoIdeal + 3.0)){
        cout << "Você esta acima do peso ideal" << endl;
    } else if (pesoAtual < (pesoIdeal-3.0)){
        cout << "Você esta abaixo do peso ideal" << endl;
    } else{
        cout << "Você esta no peso ideal para a sua altura" << endl;
    }

}
