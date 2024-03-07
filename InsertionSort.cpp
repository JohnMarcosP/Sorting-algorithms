//#########################+
//# Author: João Marcos    #
//#                        #
//# Date: 03-07-24         #
//#                        #
//#########################+
#include <iostream>
using namespace std;

// Declarando a função para o Insertion Sort
void Insertion_Sort(int vet[], int N);

int main()
{
    cout << "Digite o tamanho do vetor" << endl;
    int N;
    cin >> N;
    int vet[N];
    for (int i = 0; i < N; i++)
    {
        cin >> vet[i];
    }

    Insertion_Sort(vet, N);

    // Imprimindo o vetor ordenado
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}

// Função Insertion Sort
void Insertion_Sort(int vet[], int N)
{
    int i, j, x;
    // Percorrer o vetor a partir do segundo elemento
    for (i = 1; i < N; i++)
    { // x -> elemento que será inserido na posição correta
        x = vet[i];
        //índice do elemento anterior a x
        j = i - 1;
        //move os elementos maiores que x uma posição à frente
        // para abrir espaço para a inserção de x na posição correta
        while (j >= 0 && vet[j] > x)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = x;
    }
}
