#include <iostream>
#include <fstream>
#include "l_intrfc.h"

int i=0;

using namespace h_list;
using namespace std;

bool found(const base &x, const lisp l);
bool isLetter(char c);

int main()
{
	setlocale(LC_ALL, "Russian");
	lisp l;
	base x;
    cout << "Ener an element you want to search" << endl;
	cin >> x;
    if(isLetter(x)){
    cout << "Enter a list" << endl;
	read_lisp (l);
	cout << "\tInput list: ";
	write_lisp(l);
	cout << endl;}
   else {
		cout << "Incorrect sign" << endl;
		exit(0);
	}
	if (found(x, l) ){
		cout << "\t\t\t";
		cout << x << " is existing\n";
		}
	else{
		cout << "\t\t\t";
		cout << x << " is not existing\n";
    		}
	cout << "\t\t\t\t\t Удаление иерархического списка" <<endl;
	destroy(l);
}

bool isLetter(char c){                  //Функция, проверяющая являеться ли символ атомом
    return 'a'<=c&&'z'>=c || 'A'<=c&&'Z'>=c;
}

bool found(const base &x, const lisp l)
{
	if (isNull(l)) return false;
	if( isAtom(l) ){ cout << "\t\t\t Проверка, являеться ли символ " << l->node.atom;
			 cout << " искомым атомом" << endl;
		if (l->node.atom == x) return true;
		else return false;
		}
        cout << "\t\t\tШаг №";
        cout << ++i << endl;
	if( found(x, l->node.pair.hd) ) return true;

	if( found(x, l->node.pair.tl) ) return true;


	return false;
}
