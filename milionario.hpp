#ifndef milionario_hpp
#define milionario_hpp

const int MILHAO = 1000000;

void calcTempMilionario();

void calcTempMilionario(){

    double salario, despesas, saldo;
    int anos;

    cout << "Informe o valor do seu sal�rio: " << endl;
    cin >> salario;
    cout << "Informe o total das suas despesas: " << endl;
    cin >> despesas;

    saldo = salario-despesas;
    anos = ceil((MILHAO/saldo)/12);

    cout << "Por m�s sobram " << saldo << " reais." << endl;
    cout << "Voc� ficar� ryca em no m�nimo " << anos << " anos." << endl;
}

#endif
