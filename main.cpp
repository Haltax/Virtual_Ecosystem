#include <iostream>
#include "generatorlosowy.h"
#include "sasiedztwo.h"
#include "ustawienia.h"
#include "nisza.h"
#include "osobniki.h"
#include <string>
using namespace std;

static Nisza n1, n2, n3;

static char sep = UstawieniaSymulacji::
pobierzUstawienia().znakSeparator;

void wyswietlNisze()
{
cout << n1.jakiSymbol() << sep
<< n2.jakiSymbol() << sep
<< n3.jakiSymbol() << endl;
}

int main()
{
cout << "Puste nisze: ";
wyswietlNisze();

cout << "Lokowanie mieszkańców: ";
n1.przyjmijLokatora(new Glon());
n3.przyjmijLokatora(new Grzyb());
wyswietlNisze();

cout << "Przesuwanie lokatorów: ";
n2 = n1;
wyswietlNisze();

cout << "Przesuwanie lokatorów:";
n3 = n2;
wyswietlNisze();

cout << endl;
return 0;
}



//int main()
//{
//Nisza nisza;
//nisza.przyjmijLokatora(new Bakteria());

//cout << "Kto w niszy: "
//<< nisza.ktoTuMieszka() << endl;
//cout << "Czy żywy: "
//<< nisza.lokatorZywy() << endl;

//Sasiedztwo sasiedztwo;
//sasiedztwo.okreslSasiada(P,GLON);
//sasiedztwo.okreslSasiada(PG,GRZYB);
//sasiedztwo.okreslSasiada(G,GRZYB);
//sasiedztwo.okreslSasiada(LG,GLON);
//sasiedztwo.okreslSasiada(L,BAKTERIA);
//sasiedztwo.okreslSasiada(LD,BAKTERIA);
//sasiedztwo.okreslSasiada(D,GLON);
//sasiedztwo.okreslSasiada(PD,PUSTKA);

//ZamiarMieszkanca zamiar =
//nisza.aktywujLokatora(sasiedztwo);

//cout << "Akjca: " << zamiar.akcja << " gdzie: "
//<< zamiar.gdzie << endl;

//cout << endl;
//return 0;
//}
