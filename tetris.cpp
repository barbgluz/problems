#include<iostream>
#include<string>
using namespace std;

typedef struct jogador {
    string nome;
    int pontos;
} jogador;

void merge(jogador jog[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 =  right - middle;

    jogador L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = jog[left + i];
    for (j = 0; j < n2; j++)
        R[j] = jog[middle + 1+ j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i].pontos > R[j].pontos) {
            jog[k] = L[i];
            i++;
        } else if(L[i].pontos == R[j].pontos) {
            if(L[i].nome.compare(R[j].nome) < 0) {
                jog[k] = L[i];
                i++;
            } else {
                jog[k] = R[j];
                j++;
            }
        } else {
            jog[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        jog[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        jog[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(jogador jog[], int left, int right) {
    if (left < right) {
        int middle = (left+right)/2;

        mergesort(jog, left, middle);
        mergesort(jog, middle+1, right);
        merge(jog, left, middle, right);
    }
}


int main() {
    int j, t = 0;

    while(cin >> j, j != 0) {

        jogador jog[j];

        for(int i = 0; i < j; i++) {
            cin >> jog[i].nome;
            jog[i].pontos = 0;
            int maior = 0, menor = 1001;

            for (int k = 0; k < 12; k++) {
                int p;
                cin >> p;
                if (p > maior) maior = p;
                if (p < menor) menor = p;
                jog[i].pontos += p;
            }
            jog[i].pontos -= (menor + maior);
        }

        mergesort(jog, 0, j-1);

        cout << "Teste "<< ++t << endl;
        int m = 0;


        for(int i = 0; i < j; i++) {
            if(i!= 0 && jog[i-1].pontos != jog[i].pontos) {
                m = i;
            }
            cout << m+1 << " " << jog[i].pontos << " " << jog[i].nome << endl;
        }
        cout << endl;
    }
}
