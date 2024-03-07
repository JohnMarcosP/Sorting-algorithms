//#########################+
//# Author: João Marcos    #
//#                        #
//# Date: 03-07-24         #
//#                        #
//#########################+
#include <iostream>
using namespace std;

// Declaring the function for Insertion Sort
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

// Printing the ordered vector
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}

// Insertion Sort function
void Insertion_Sort(int vet[], int N)
{
    int i, j, x;
    // Traverse the vector starting from the second element
    for (i = 1; i < N; i++)
{ // x -> element that will be inserted in the correct position
        x = vet[i];
        //index of the element before x
        j = i - 1;
        //move elements greater than x one position forward
        // to make room for inserting x in the correct position
        while (j >= 0 && vet[j] > x)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = x;
    }
}
