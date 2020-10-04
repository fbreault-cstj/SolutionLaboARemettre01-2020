//But: Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
//L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
//100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
//nombre.
//Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition
//que l'utilisateur a faiteet le stocke dans iRandom
//Nom: Francis Breault
//Date: 2020-10-04



//Le code suivant permet d’obtenir dans la variable iRandom un nombre aléatoire entre 0 et 100 :

#include <time.h> 
#include <iostream>
using namespace std;



int main()
{

    setlocale(LC_ALL, "");


    int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
    srand (time(0)); // pour activer l’aléatoire dans le programme
    iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
    //Déclaration de variable

     // Initialise la valeur 0 a la variable chance
    int nombre; // Représente le nombre choisi par l'utilisateur


    cout << " Bienvenue à la roulette iRandom, vous avez 5 chances pour deviner le nombre entre 0 et 100" << endl;
    cout << " Veuillez écrire un nombre :";
    cin >> nombre;

    

    cout << "Vous avez 5 chances pour trouver le nombre" << endl;
        int chance = 0;// Initialise la valeur 0 a la variable chance
        int chanceRestante = 4;

            while (chanceRestante > 0 && nombre != iRandom )
            {
                cout << " Malheureusement, votre nombre : " << nombre << " ne correspond pas a notre nombre" << endl;

                if (nombre > iRandom)
                {
                    cout << " Le nombre que nous cherchons est plus petit que " << nombre << endl;
                }
                else
                {
                    if (nombre < iRandom)
                    {
                        cout << " Le nombre que nous cherchons est plus grand que " << nombre << endl;
                    }
                }
                
                cout << " Veuillez réessayer" << endl;

                system("pause");
               

                cout << "Il vous reste" << chanceRestante << "chance" << endl;
                    cout << " Veuillez écrire un nombre :" << endl;
                    cin >> nombre;
                    chance++;
                    chanceRestante--;
            }

   
        if (chance = 4 && nombre != iRandom)
        {
            cout << " Désolé,vous avez perdu, le nombre que nous cherchions était : " << iRandom;
        }
        else
        {
            cout << "Félicitation, vous avez gagné " << endl;
        }
       
    
    return 0;
}




/* Plan de test         nombre          iRandom                         Résultat
                           80               50                          Désolé,vous avez perdu, le nombre que nous cherchions était : 50 
                           70               80                         Désolé,vous avez perdu, le nombre que nous cherchions était : 80
                            0               0                           Félicitation, vous avez gagné
                            8               10                          Désolé,vous avez perdu, le nombre que nous cherchions était : 10


*/
/*Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
nombre.
Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition
que l'utilisateur a faite.t 100 et le stocke dans iRandom*/