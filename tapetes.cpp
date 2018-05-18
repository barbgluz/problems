#include <iostream>
using namespace std;

int main(){
	long long larg = 0, num = 0, soma = 0, menores = 0, maior = 0, area = 0, areaMaior = 0;

	cin>>larg>>num;

	menores = num-1;
	maior = larg - menores;

	areaMaior = maior*maior;

	area = menores + areaMaior;

	// soma = (num-1)+ ((larg-(num-1)) * (larg-(num-1)));

	cout<<area<<endl;
}