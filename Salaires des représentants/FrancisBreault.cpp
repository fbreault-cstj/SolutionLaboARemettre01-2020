//But: Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme
// Nom: Francis Breault
//Date: 2020-02-10



/*
Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission.Les
représentants reçoivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.

*/

#include <iostream>

int main()
{
	using namespace std; // Pour eviter de mettre les std

	setlocale(LC_ALL, "");

	//Déclaration des variables
	const int salaire = 250; //Représente le salaire de base des représentant
	int vente; // Represente les vente brute par semaine des représentant
	const float pourcentageVente = 7.5; // Représente le pourcentage des ventes brutes des représentants 
	float salaireTotal; //
	
	cout << " Veuillez entrer vos ventes brutes par semaine (ou -1 pour Quitter) : ";
	cin >> vente;
	while (vente != -1) // La boucle ce répète jusqu'a ce que l'utilisateur entre -1 dans la console pour quitter le programme
	{


		salaireTotal = ((vente * pourcentageVente) / 100) + salaire; //On calcule le salaire total du représentant en fonction de ces vente brute 

		cout << " Le calcul de votre salaire est le suivant : " << vente << " X " << pourcentageVente << " / 100 +  " << salaire << " = " << salaireTotal << endl;
		cout << " Cette semaine, votre salaire est de : " << salaireTotal << endl;

		system("pause");	//On fais une pause pour que l'utilisateur vois ce qu'il y a sur l'écran avant de recommencer la boucle
		system("cls");		// On efface l'écran  cls(clear screen) pour afficher de nouveau le menu et demander le choix a l'utilisateur
		
		cout << " Veuillez entrer vos ventes brutes par semaine (ou -1 pour Quitter) : ";
		cin >> vente;
	}

	cout << "Vous avez terminé, vous pouvez quitter.";

	return 0;
}

/* Plan de test			Vente				Salaire Total
						5000					625
						9000					925
						854120					64309
						-1									Vous avez terminé, vous pouvez quitter.
						0						250


*/