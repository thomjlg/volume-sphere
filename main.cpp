#include<iostream> // declaration de cin et cout
#include"volumes.h" // declaration de nos fonctions de volume
using namespace std;

int main() {
	//Lexique principal
	float rayon, volume;
	//Algo principal
	//debut
	cout << "Saisir le rayon de votre sphere en cm" << endl;
	cin >> rayon;
	volume = Volume_sphere(rayon);
	cout << "Le volume de la sphere de rayon" << rayon << "cm est de :" << volume << "cm3" << endl;

	//Fin
	return 0;
}