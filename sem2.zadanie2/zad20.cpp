#ifndef MOJE_FUNKJCE_HPP
#define MOJE_FUNKJCE_HPP
#include <iostream>
#include <cstring>

using namespace std;
constexpr size_t ROZMIAR_TXT = 200;
using text = char[ROZMIAR_TXT + 1];
using sztukiZlota = int;

enum class TypRzadkosci
{
	popspolita,
	niecodzienna,
	rzadka,
	unikatowa
};

struct Przedmiot
{
	text nazwa;
	sztukiZlota wartosc;
	TypRzadkosci rzadkosc;
	//wrzucic funkcje i druga struct dla drugiej funkcji
	//
};

Przedmiot wypelnijPrzedmiot(const char* nazwa, sztukiZlota wartosc, TypRzadkosci typ);

void efektMagiczny1(int mana);

void efektMagiczny2(int mana);

#endif

void efektMagiczny1(int mana)
{
	         „Ognista flara”
		„Ognista kula”
		 „Ogniste tornado”
		
}
void efektMagiczny2(int mana)
{
	"Wodna flara”
		„Wodna kula"
		„Wodne tornado”

}

Przedmiot wypelnijPrzedmiot(const char* nazwa, sztukiZlota wartosc, TypRzadkosci typ)
{
	Przedmiot nowy;
	strncpy_s(nowy.nazwa, nazwa, ROZMIAR_TXT);
	nowy.nazwa[ROZMIAR_TXT] = '\0';
	nowy.wartosc = wartosc;
	nowy.rzadkosc = typ;
	return nowy;
}

ostream& operator<<(ostream &str, const Przedmiot& p)
{
	static const char* NAZWY_TYPOW_RZADKOSCI[] = { "Pospolity","Niecodzienny","Rzadki","Unikatowy" };
	str << "\"" << p.nazwa << "\"" << " [" << p.wartosc << "]" << " {"
		<< NAZWY_TYPOW_RZADKOSCI[ (int) p.rzadkosc] << "}";
	return str;
}


int main()
{
	Przedmiot wisiorek = wypelnijPrzedmiot("Amulet zaliczenia warunkowego ;)", 100, TypRzadkosci::unikatowa);
	Przedmiot sygnet = wypelnijPrzedmiot("Sygnet poprawki ;)", 50, TypRzadkosci::popspolita);
	cout << wisiorek << endl;
	cout << sygnet << endl;
	return 0;
}
