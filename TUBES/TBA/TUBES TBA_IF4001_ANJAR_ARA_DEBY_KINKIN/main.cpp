#include "header.h"
#include <cstring>

using namespace std;

int main ()
{
	List L1;
	List2 L2;
	createList(L1);
	createList2(L2);
	adr P;
	adr2 Q;
	string s;
	cout<<endl<<"Guide:"<<endl;
    	cout<<"1. Angka = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}"<<endl;
    	cout<<"2. Operator = {+ - : x }"<<endl;
    	cout<<"3. Simbol = { ( ) , }"<<endl;
	cout<<"Masukan inputan angka/simbol/operator yang diinginkan "<<endl;
	getline(cin,s);
	token (s,L1,L2,P,Q);
	printInfo2(L2);
	validasi (L1,L2);
} ;
