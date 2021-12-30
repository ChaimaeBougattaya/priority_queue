// Q3EXO1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
#include<queue>
int main()
{
	priority_queue<string> Queue;
	int n;
	string mot;
	cout << "Entrer le nombre de mot : "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "\nle mot  " << i + 1 << " : ";
		cin >> mot;
		Queue.push(mot);
	}
	cout << endl << "Affichage de queue " << endl;
	while (!Queue.empty()) {
		cout << '\t' << Queue.top();
		Queue.pop();
	}


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
