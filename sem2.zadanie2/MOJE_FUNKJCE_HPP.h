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
	const char* efekt;
};

Przedmiot wypelnijPrzedmiot(const char* nazwa, sztukiZlota wartosc, TypRzadkosci typ, const char* efekt);

const char* efektMagiczny1(int mana);
const char* efektMagiczny2(int mana);
int przedmiotyOIdentycznymEfekcie(Przedmiot* tablicaPrzedmiotow, int rozmiar, const char* efekt);

#endif
