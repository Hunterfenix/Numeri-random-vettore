//Librerie
#include<iostream>
#include<ctime>
#include<cstdlib>

int NUMERI[5],SUM; //Variabili globali

void randmA() //Inizializzo la funzione per randomizzare i nuemri ed inserirli nel array
{
srand(time(NULL)); //inizializzo il seme

int rand; //Inizializzo una varibbile d'appoggio

for(int i = 0; i < 5; i++) //Randomizzo i numeri e li inserisco nel array
{

rand = std::rand() % 25 + 1;
NUMERI[i]=rand;

}

}


void somma() //Inizializzo la funzione per sommare
{


for(int i = 0; i < 5; i++) //Sommo le variabbili
{

SUM += NUMERI[i];

}

}


int main() // Inizializzo la funzione main
{

randmA();
somma();
std::cout << "l'array e composto da queste 5 cifre: "; //Dalla riga 44 alla riga 51 faccio uscire a schermo l'array;
for (int i = 0; i < 5; i++)
{

std::cout << NUMERI[i] << ",";

}
std::cout << "" << std::endl;

std::cout << "la somma dell'array e': " << SUM << std::endl; //Faccio uscire a schermo la somma dell'array


return 0;
}