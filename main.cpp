#include <iostream>
#include "baustein.h"
#include "schnittstelle.h"
#include "und2.h"
#include "oder2.h"
#include "xor2.h"
#include "halbaddierer.h"
#include "volladdierer.h"




void test2(Baustein* b) {

	b->eingang.at(0)->setPegel(Schnittstelle::HIGH);

	b->eingang.at(1)->setPegel(Schnittstelle::HIGH);

	b->update();
	b->print();

}

void test3(Baustein* b) {

	b->eingang.at(0)->setPegel(Schnittstelle::HIGH);

	b->eingang.at(1)->setPegel(Schnittstelle::HIGH);

	b->eingang.at(2)->setPegel(Schnittstelle::HIGH);

	b->update();
	b->print();

}



int main() {

	Schnittstelle e0, e1,e2, a0, a1;  
	
	/*Oder2 oder2(&e0, &e1, &a0);
	Baustein* oder = &oder2; 
	test2(oder); */

	Halbaddierer HA(&e0, &e1, &a0, &a1);  
	Baustein* halbaddierer = &HA; 
	test2(halbaddierer);
	
	std::cout << "\n"; 

	Volladdierer VA(&e0, &e1, &e2, &a0, &a1); 
	Baustein* volladdierer = &VA; 
	test3(volladdierer); 

	return 0;
}