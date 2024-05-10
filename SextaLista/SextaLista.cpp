#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

////*********PRIMEIRO EXERCICIO*********

//int main() { 
//	vector<int> num(10);
//	//PREENCHENDO O VETOR PELO CONSOLE
//	cout << "Digite 10 numeros para o vetor: ";
//
//	//INSERINDO ELEMENTOS NO VETOR
//	for (int i = 0; i < 10; i++) {
//		cout << "Numero: ";
//		cin >> num[i];
//	}
//	////MOSTRANDO  O VETOR QUE CRIAMOS
//	for (int i = 0; i < num.size(); i++) {
//		cout << num[i];
//	}
//}
 
//*******************SEGUNDO EXERCICIO*****************

//int  main() {
	//const int tamanho = 7;
	//int vetor[tamanho];
	//int soma = 0;
	//cout << "Insira os elementos ao vetor: ";
	//for (int i = 0; i < tamanho; ++i) {
	//	std::cout << "Elemento " << i + 1 << ": ";
	//	std::cin >> vetor[i];
	//}
	////Calculando 
	//for (int i = 0; i < tamanho; i++) {
	//	soma += vetor[i];
	//}
	//cout << "Soma dos elementos do vetor é: " << soma << std::endl;
	// 
	// 
	// 

	//*******************TERCEIRO EXERCICIO*********************

//int main() {
//	// Definindo as quantidades de alunos por idade
//	int alunos_18_anos = 3;
//	int alunos_17_anos = 2;
//	int alunos_16_anos = 12;
//
//	// Calculando a soma das idades
//	int soma_idades = (alunos_18_anos * 18) + (alunos_17_anos * 17) + (alunos_16_anos * 16);
//
//	// Calculando o total de alunos
//	int total_alunos = alunos_18_anos + alunos_17_anos + alunos_16_anos;
//
//	// Calculando a média das idades
//	double media_idades = static_cast<double>(soma_idades) / total_alunos;
//
//	// Mostrando a média das idades
//	std::cout << "A media das idades dos alunos na sala e: " << media_idades << std::endl;
//
//	return 0;
//}


//******************QUARTO EXERCICIO****************


//int main() {
//	// Declarar vetor inteiro com valores
//	vector<int> numeros = { 5, 9, 7, 10, 15, 23 };
//
//	// Adicionar novos elementos ao vetor
//	numeros.push_back(20);
//	numeros.push_back(30);
//
//	// Mostrar o vetor
//	for (int i = 0; i < numeros.size(); i++) {
//		cout << numeros[i] << " ";
//	}
//
//	return 0;
//}

//****************QUINTO EXERCICIO******************

int main() {
	const int tamanho = 10;
	int vetor[tamanho];
	int soma; 
	cout << "Digite os 10 elementos do vetor: ";
	for (int i = 0; i < tamanho; ++i) {
		soma += vetor[i];
		cout << "Elemento " << i + 1 << ": ";
		cin >> vetor[i];
	}int opcao;
    cout << "Escolha uma opção:\n1. Somar todos os elementos\n2. Subtrair todos os elementos\n3. Multiplicar todos os elementos\nOpção: ";
    cin >> opcao;

    switch (opcao) {
    case 1:
        // Soma de todos os elementos
    {
        int soma = 0;
        for (int i = 0; i < tamanho; ++i) {
            soma += vetor[i];
        }
        cout << "A soma de todos os elementos é: " << soma << endl;
    }
    break;
    case 2:
        // Subtração de todos os elementos
    {
        int subtracao = vetor[0]; // Começando com o primeiro elemento
        for (int i = 1; i < tamanho; ++i) {
            subtracao -= vetor[i];
        }
        cout << "A subtração de todos os elementos é: " << subtracao << endl;
    }
    break;
    case 3:
        // Multiplicação de todos os elementos
    {
        int multiplicacao = 1; // Começando com 1 para não afetar o resultado
        for (int i = 0; i < tamanho; ++i) {
            multiplicacao *= vetor[i];
        }
        cout << "A multiplicação de todos os elementos é: " << multiplicacao << endl;
    }
    break;
    default:
        cout << "Opção inválida!" << endl;
    }

    return 0; 
};