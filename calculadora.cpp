/*                     DESENVOLVIDO POR VITOR FELIPE RAMOS MELLO - GRADUANDO ENGENHARIA DA COMPUTA��O
                                           NA UNIVERSIDADE DO VALE DO ITAJA�*/
#include <iostream>
using namespace std;
#include <windows.h>//cont�m declara��es para todas as fun��es da API do Windows
#include <locale.h>//Usado para utilizar a linguagem pt-br
    int main(){
    setlocale(LC_ALL,"Portuguese");

    int a, b, escolha; // VARIAVEIS GLOBAIS
    float resultado;// RESULTADO, PODE SER EM D�ZIMA PERI�DICA TAMB�M
    bool programa = true;
    while(programa){
        // ENTRADA DE DADOS
        cout << "Digite o primeiro valor: ";
        cin >> a;

        cout << "Digite o segundo valor: ";
        cin >> b;
        // SE A ENTRADA A E B FOR IGUAL A 0 O PROGRAMA FECHA
        if(a == 0 && b == 0){
            programa = false;
            break;
        }
        else {
            cout << "Digite a opcao desejada:\n\
            1 - Soma\n\
            2 - Produto\n\
            3 - Divisao\n\
            4 - Potencia\n\
            5 - subtra��o\n";
            cin >> escolha;
            // ESCOLHA DAS OPERA��ES
            switch(escolha){
                case 1:
                    resultado = a + b;
                    break;
                case 2:
                    resultado = a * b;
                    break;
                case 3:
                    resultado = a/b;
                    break;
                case 4:
                    resultado = a;
                    for(float x=1; x < b; x++){
                        resultado = a * resultado;
                    }
                    break;
                case 5:
                    resultado = a - b;
                    break;
            }
            cout << "Resultado:" << resultado << endl;

        }

    }


    cout << "Procedimento realizado com sucesso. ";

    system ("\nPause ");
	return 0;
}
//FIM ALGOR�TIMO
