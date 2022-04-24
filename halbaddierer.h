#pragma once
#include "schaltung.h"
#include "xor2.h"
#include "und2.h"

class Halbaddierer : public Schaltung {

public : 

	Halbaddierer(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* a0, Schnittstelle* a1) {

		addEingang(e0);
		addEingang(e1);
		addAusgang(a0);
		addAusgang(a1);


		Baustein* und2 = new Und2 (eingang.at(0), eingang.at(1), ausgang.at(0)); 
		Baustein* xor2 = new Xor2(eingang.at(0), eingang.at(1), ausgang.at(1)); 



		bausteine = { und2 , xor2 };    
		name = "Halbaddierer";

	}

	void update() {

		bausteine.at(0)->update(); 
		bausteine.at(1)->update();

	}
};

