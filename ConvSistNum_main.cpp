#include <iostream>
#include <string>

using namespace std;

string newConv;
int opc;

void Bin(int x)
{
	if (x > 1)
	{
		Bin(x / 2);
	}
	cout << x % 2;
}

void Oct(int x)
{
	if (x > 7)
	{
		Oct(x / 8);
	}
	cout << x % 8;
}

int main()
{

	do{
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "\n  BIENVENIDO AL PROGRAMA DE CONVERSION DE SISTEMAS NUMERICOS   \n" << endl;
		cout << "Elija una opcion de conversion del siguiente menu "<<endl;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "Decimal a BINARIO.............1" << endl;
		cout << "Decimal a OCTAL...............2" << endl;
		cout << "Decimal a HEXADECIMAL.........3" << endl;
		cout << "SALIR DEL MENU................4" << endl;
		cout << "=*=*=*=*=*=*=*=*=*=*=*=*\n" << endl;
		cout << "*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
		cout << "\nElija una opcion: ";
		cin >> opc;
		cout << "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n" << endl;

		switch (opc)
		{
			case 1:
				int decb;
				cout << "Ingrese un numero en decimal: ";
				cin >> decb;

				cout << "El numero " << decb << " en BINARIO es: ";
				Bin(decb);
				break;

			case 2:
				int decO;
				cout << "Ingrese un numero en decimal: ";
				cin >> decO;

				cout << "El numero " << decO << " en OCTAL es: ";
				Oct(decO);
				break;

			case 3:
					int digitoex[2];
					int x, residuo, resultado, i = 0;

					cout << "Ingrese un numero en decimal: ";
					cin >> x;

					do
					{
						residuo = x % 16;
						resultado = x / 16;
						digitoex[i] = residuo;
						x = resultado;
						i++;
					} while (resultado > 15);

					digitoex[i] = resultado;

					cout << "El numero en HEXADECIMAL es: ";

					//cout << "El equivalente en hexadecimal es: ";

					for (int j = i; j >= 0; j--)
					{
						if (digitoex[j] == 10)
						{
							cout << "A";
						}
						else if (digitoex[j] == 11)
						{
							cout << "B";
						}
						else if (digitoex[j] == 12)
						{
							cout << "C";
						}
						else if (digitoex[j] == 13)
						{
							cout << "D";
						}
						else if (digitoex[j] == 14)
						{
							cout << "E";
						}
						else if (digitoex[j] == 15)
						{
							cout << "F";
						}
						else
						{
							cout << digitoex[j];
						}
					}
				break;

			default:
				cout << "Opcion no valida, por favor elija un numero de opcion valida" << endl;
		}

		cout << "\nDeseas realizar otra conversion? (S/N o pulse cualquier tecla para finalizar)\n";
		cin >> newConv;
	} while (newConv == "S" || newConv == "s" || newConv == "Si" || newConv == "SI" || newConv == "si");

	cout << "*-* Hasta la proxima *-*\n";

	return 0;
}