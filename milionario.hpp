#ifndef milionario_hpp
#define milionario_hpp

const int MILHAO = 1000000;

void calcTempMilionario();

void calcTempMilionario(){

    double salario, despesas, saldo;
    int anos;

    cout << "Informe o valor do seu salário: " << endl;
    cin >> salario;
    cout << "Informe o total das suas despesas: " << endl;
    cin >> despesas;

    saldo = salario-despesas;
    anos = ceil((MILHAO/saldo)/12);

    cout << "Por mês sobram " << saldo << " reais." << endl;
    cout << "Você ficará ryca em no mínimo " << anos << " anos." << endl;
}

#endif
