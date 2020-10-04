//But: D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme
// Nom: Francis Breault
//Date: 2020-02-10



/*
Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission.Les
repr�sentants re�oivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
5000$, soit un total de 625 $.
D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.

*/

#include <iostream>

int main()
{
	using namespace std; // Pour eviter de mettre les std

	setlocale(LC_ALL, "");

	//D�claration des variables
	const int salaire = 250; //Repr�sente le salaire de base des repr�sentant
	int vente; // Represente les vente brute par semaine des repr�sentant
	const float pourcentageVente = 7.5; // Repr�sente le pourcentage des ventes brutes des repr�sentants 
	float salaireTotal; //
	
	cout << " Veuillez entrer vos ventes brutes par semaine (ou -1 pour Quitter) : ";
	cin >> vente;
	while (vente != -1) // La boucle ce r�p�te jusqu'a ce que l'utilisateur entre -1 dans la console pour quitter le programme
	{


		salaireTotal = ((vente * pourcentageVente) / 100) + salaire; //On calcule le salaire total du repr�sentant en fonction de ces vente brute 

		cout << " Le calcul de votre salaire est le suivant : " << vente << " X " << pourcentageVente << " / 100 +  " << salaire << " = " << salaireTotal << endl;
		cout << " Cette semaine, votre salaire est de : " << salaireTotal << endl;

		system("pause");	//On fais une pause pour que l'utilisateur vois ce qu'il y a sur l'�cran avant de recommencer la boucle
		system("cls");		// On efface l'�cran  cls(clear screen) pour afficher de nouveau le menu et demander le choix a l'utilisateur
		
		cout << " Veuillez entrer vos ventes brutes par semaine (ou -1 pour Quitter) : ";
		cin >> vente;
	}

	cout << "Vous avez termin�, vous pouvez quitter.";

	return 0;
}

/* Plan de test			Vente				Salaire Total
						5000					625
						9000					925
						854120					64309
						-1									Vous avez termin�, vous pouvez quitter.
						0						250


*/