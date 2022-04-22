// Funktionen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int funktion1()
{
	cout << "Die Funktion 1 wird ausgeführt." << endl;
	return 1;
}

int funktion2()
{
	cout << "Die Funktion 2 wird ausgeführt." << endl;
	return 2;
}

void neueZeile();
void neueZeile(int);

void f1(int);
void f1();

void qWurzel(double);

int mult(int, int);

void f2();

double potenz(double, double = 2);

int p1 = 42;

void main()
{
   locale::global(locale("German_germany"));

   int i = funktion1();

   cout << "Nach Verlassen der Funktion1: " << i << endl;

   cout << endl;

   cout << "Aufruf der Funktion neueZeile()" << endl;
   neueZeile();
   cout << "Ende der Funktion neueZeile()" << endl;

   cout << endl;

   cout << "Aufruf der Funktion neueZeile(int)" << endl;
   neueZeile(5);
   cout << "Ende der Funktion neueZeile(int)" << endl;

   int p1 = 12;
   f1(p1);
   cout << p1 << endl;

   cout << endl;

   f1();

   cout << ::p1 << endl;

   cout << endl;

   {
	   int p2 = 42;
	   cout << p2 << endl;
	   cout << p1 << endl;
   }

   // cout << p2 << endl;

   qWurzel(-2);
   cout << endl;

   qWurzel(16);
   cout << endl;

   cout << "Ergebnis: " << mult(12, 64) << endl;
   cout << endl;

   cout << "Ergebnis: " << mult(mult(3,4), mult(8,8)) << endl;
   cout << endl;

   for (int i = 1; i <= 5; i++)
	   f2();

   cout << endl;

   for (int i = 1; i <= 3; i++)
	   f2();

   cout << endl;

   f2();

   cout << endl;

   cout << "Potenz: " << potenz(2) << endl;
   cout << "Potenz: " << potenz(4) << endl;
   cout << "Potenz: " << potenz(3, 3) << endl;

   cout << endl;

   if(funktion1() == 1 && funktion2() == 2)
	   cout << "Die Bedingung ist wahr." << endl;
   else 
	   cout << "Die Bedingung ist nicht wahr." << endl;

   cout << endl;

   if (funktion1() == 1 || funktion2() == 2)
	   cout << "Die Bedingung ist wahr." << endl;
   else
	   cout << "Die Bedingung ist nicht wahr." << endl;

   cout << endl;

   if (funktion1() == 2 && funktion2() == 2)
	   cout << "Die Bedingung ist wahr." << endl;
   else
	   cout << "Die Bedingung ist nicht wahr." << endl;

   cout << endl;
}

void neueZeile()
{
	cout << endl;
}

void neueZeile(int anzahl)
{
	/*for(int i = 0; i < anzahl; i++ )
		cout << endl;*/

	// oder
	/*while(anzahl--)
		cout << endl;*/

	// oder
	while (anzahl--)
		neueZeile();
}

void f1(int p1)
{
	cout << "Dies ist die Funktion f1(int)" << endl;
	cout << "p1: " << p1 << endl;

	p1 = 100;
}

void f1()
{
	cout << "Dies ist die Funktion f1()" << endl;
	cout << "Globale p1: " << p1 << endl;

	p1 = 100;
}

void qWurzel(double value)
{
	if (value < 0)
	{
		cerr << "Keine Wurzel aus negative Zahlen." << endl;
		return;
	}

	cout << sqrt(value) << endl;
}

int mult(int p1, int p2)
{
	cout << "Dies ist Die Funktion mult(int, int)" << endl;
	printf("p1 = %d, p2 = %d\n", p1, p2);

	/*int retValue = p1 * p2;

	return retValue;*/

	return p1 * p2;
}

void f2()
{
	static int anzahl = 1;

	// anzahl = 0;

	cout << "Aufruf f2(): " << ++anzahl << endl;
}

double potenz(double basis, double exponent)
{
	return pow(basis, exponent);
}
