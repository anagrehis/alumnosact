#include <iostream>
#include <string>
using namespace std;
int main () {
	cout << " Bienbenido. Ya puede calcular las notas de sus alumnos. " << endl;
	cout << " ¿Nombre y Apellido del alumno?" << endl;
	string nombre;
	cin >> nombre;
	string apellido;
	cin >> apellido;
	
	cout << " Muy bien, ya puede introducir las notas de "<< nombre << " " << apellido << endl;
	cout << "" << endl;
	cout << " Nota numero 1- 10% " << endl;
	double notaa;
	cin >> notaa;
	double a;
	a=notaa*10/100;
	cout << " En la primera nota obtuvo " << a << " puntos. "<< endl;
	cout << "" << endl;
	
	cout << " Nota numero 2- 20% " << endl;
	double notab;
	cin  >> notab;
	double b;
	b=notab*20/100;
	cout << " En la segunda nota obtuvo " << b << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 3- 15% " << endl;
	double notac;
	cin >> notac;
	double c;
	c=notac*15/100;
	cout << " En la tercera nota obtuvo " << c << " puntos. " << endl;
	cout << "" << endl;

	cout << " Nota numero 4- 15% " << endl;
	double notad;
	cin >> notad;
	double d;
	d=notad*15/100;
	cout << " En la cuarta nota obtuvo " << d << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 5- 20% " << endl;
	double notae;
	cin >> notae;
	double e;
	e=notae*20/100;
	cout << " En la quinta nota obtuvo " << e << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 6- 20% " << endl;
	double notaf;
	cin >> notaf;
	double f;
	f=notaf*20/100;
	cout << " En la sexta nota obtuvo " << f << " puntos. " << endl;
	cout << "" << endl;
	double nfinal;
	nfinal=a+b+c+d+e+f;
	cout << "La nota final del alumno "<< nombre << " " << apellido << "fue: " << nfinal << endl;
	
	cout << " Desea calcular las notas de otro alumno (si/no) " << endl;
	string x;
	cin >> x;
	
		while (x=="si" or x=="s"){
        cout << " Bienbenido. Ya puede calcular las notas de sus alumnos. " << endl;
	cout << " ¿Nombre y Apellido del alumno?" << endl;
	string nombre;
	cin >> nombre;
	string apellido;
	cin >> apellido;
	
	cout << " Muy bien, ya puede introducir las notas de "<< nombre << " " << apellido << endl;
	cout << "" << endl;
	cout << " Nota numero 1- 10% " << endl;
	double notaa;
	cin >> notaa;
	double a;
	a=notaa*10/100;
	cout << " En la primera nota obtuvo " << a << " puntos. "<< endl;
	cout << "" << endl;
	
	cout << " Nota numero 2- 20% " << endl;
	double notab;
	cin  >> notab;
	double b;
	b=notab*20/100;
	cout << " En la segunda nota obtuvo " << b << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 3- 15% " << endl;
	double notac;
	cin >> notac;
	double c;
	c=notac*15/100;
	cout << " En la tercera nota obtuvo " << c << " puntos. " << endl;
	cout << "" << endl;

	cout << " Nota numero 4- 15% " << endl;
	double notad;
	cin >> notad;
	double d;
	d=notad*15/100;
	cout << " En la cuarta nota obtuvo " << d << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 5- 20% " << endl;
	double notae;
	cin >> notae;
	double e;
	e=notae*20/100;
	cout << " En la quinta nota obtuvo " << e << " puntos. " << endl;
	cout << "" << endl;
	
	cout << " Nota numero 6- 20% " << endl;
	double notaf;
	cin >> notaf;
	double f;
	f=notaf*20/100;
	cout << " En la sexta nota obtuvo " << f << " puntos. " << endl;
	cout << "" << endl;
	double nfinal;
	nfinal=a+b+c+d+e+f;
	cout << "La nota final del alumno "<< nombre << " " << apellido << "fue: " << nfinal << endl;
	}
		 if (x=="no" or x=="n") {
		cout << "Gracias por usar este programa. " << endl;
	
	}
    }
		
	
