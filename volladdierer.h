#pragma once
#include "schaltung.h"
#include "halbaddierer.h"
#include "oder2.h"

class Volladdierer : public Schaltung {

public : 



	Volladdierer(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* e2, Schnittstelle* a0, Schnittstelle* a1) {

		addEingang(e0);  
		addEingang(e1);
		addEingang(e2); 
		addAusgang(a1);
		addAusgang(a0);

		Schnittstelle* i0 = new Schnittstelle();  
		Schnittstelle* i1 = new Schnittstelle(); 
		Schnittstelle* i2 = new Schnittstelle(); 

		intern = { i0, i1, i2 };

		Halbaddierer* HA0 = new Halbaddierer(eingang.at(0), eingang.at(1), intern.at(0), intern.at(1));
		Halbaddierer* HA1 = new Halbaddierer(intern.at(1), eingang.at(2), intern.at(2), ausgang.at(1));
		Baustein* oder2 = new Oder2(intern.at(0), intern.at(2), ausgang.at(0));

		/*Halbaddierer* HA0 = new Halbaddierer(eingang.at(0), eingang.at(1), i0, i1);
		Halbaddierer* HA1 = new Halbaddierer(i1, eingang.at(2), i2, ausgang.at(1));
		Baustein* oder2 = new Oder2(i0, i2, ausgang.at(0));*/

		bausteine = { HA0, HA1, oder2 }; 
		name = "Volladdierer"; 
	
	}

	

	void update() {

		bausteine.at(0)->update(); 
		bausteine.at(1)->update();
		bausteine.at(2)->update(); 
	}
};

