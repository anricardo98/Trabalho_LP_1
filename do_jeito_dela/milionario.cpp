void calcTempMilionario(){

    double salario, despesas, saldo;
    int anos;

    cout << "Informe o valor do seu salario: " << endl;
    cin >> salario;
    cout << "Informe o total das suas despesas: " << endl;
    cin >> despesas;

    saldo = salario-despesas;
    anos = ceil((MILHAO/saldo)/12);

    cout << "Por mas sobram " << saldo << " reais." << endl;
    cout << "Voce ficara ryca em no minimo " << anos << " anos." << endl;
}