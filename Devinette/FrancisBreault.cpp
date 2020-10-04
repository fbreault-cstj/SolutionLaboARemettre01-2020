//But: Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
//L�utilisateur a un maximum de 5 chances.Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
//100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
//nombre.
//D�fi : Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition
//que l'utilisateur a faiteet le stocke dans iRandom
//Nom: Francis Breault
//Date: 2020-10-04



//Le code suivant permet d�obtenir dans la variable iRandom un nombre al�atoire entre 0 et 100 :

#include <time.h> 
#include <iostream>
using namespace std;



int main()
{

    setlocale(LC_ALL, "");


    int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
    srand (time(0)); // pour activer l�al�atoire dans le programme
    iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
    //D�claration de variable

     // Initialise la valeur 0 a la variable chance
    int nombre; // Repr�sente le nombre choisi par l'utilisateur


    cout << " Bienvenue � la roulette iRandom, vous avez 5 chances pour deviner le nombre entre 0 et 100" << endl;
    cout << " Veuillez �crire un nombre :";
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
                
                cout << " Veuillez r�essayer" << endl;

                system("pause");
               

                cout << "Il vous reste" << chanceRestante << "chance" << endl;
                    cout << " Veuillez �crire un nombre :" << endl;
                    cin >> nombre;
                    chance++;
                    chanceRestante--;
            }

   
        if (chance = 4 && nombre != iRandom)
        {
            cout << " D�sol�,vous avez perdu, le nombre que nous cherchions �tait : " << iRandom;
        }
        else
        {
            cout << "F�licitation, vous avez gagn� " << endl;
        }
       
    
    return 0;
}




/* Plan de test         nombre          iRandom                         R�sultat
                           80               50                          D�sol�,vous avez perdu, le nombre que nous cherchions �tait : 50 
                           70               80                         D�sol�,vous avez perdu, le nombre que nous cherchions �tait : 80
                            0               0                           F�licitation, vous avez gagn�
                            8               10                          D�sol�,vous avez perdu, le nombre que nous cherchions �tait : 10


*/
/*Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
L�utilisateur a un maximum de 5 chances.Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
nombre.
D�fi : Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition
que l'utilisateur a faite.t 100 et le stocke dans iRandom*/