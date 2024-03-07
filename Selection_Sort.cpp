#include<iostream>
using namespace std;

void Selection_Sort(int vet[], int N);

int main()
{
    cout << "Digite o tamanho do vetor" << endl;
    int N;
    cin >> N;
    int vet[N];
    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> vet[i];
    }

    Selection_Sort(vet, N);

    // Imprimindo o vetor ordenado
    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}

void Selection_Sort(int vet[], int N)
{
    int min;
    for (int i = 0; i < N-1; i++)
    {
        min = i;
        for (int j = i+1; j < N; j++)
        {
            if (vet[j] < vet[min])
            {
                min = j;
            }
        }
        // Troca os elementos vet[i] e vet[min]
        int temp = vet[i];
        vet[i] = vet[min];
        vet[min] = temp;
    }
}
