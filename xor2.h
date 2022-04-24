#pragma once
#include "baustein.h"

class Xor2 : public Baustein {


public : 

	Xor2(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* a0) {

		addEingang(e0);
		addEingang(e1);
		addAusgang(a0);
		name = "Xor2"; 
	}


	void update() {

		if (eingang.at(0)->getPegel() == Schnittstelle::LOW && eingang.at(1)->getPegel() == Schnittstelle::LOW) {

			ausgang.at(0)->setPegel(Schnittstelle::LOW);
			ausgang.at(0)->getPegel();
		}

		else if (eingang.at(0)->getPegel() == Schnittstelle::LOW && eingang.at(1)->getPegel() == Schnittstelle::HIGH) {

			ausgang.at(0)->setPegel(Schnittstelle::HIGH);
			ausgang.at(0)->getPegel();

		}

		else if (eingang.at(0)->getPegel() == Schnittstelle::HIGH && eingang.at(1)->getPegel() == Schnittstelle::HIGH) {

			ausgang.at(0)->setPegel(Schnittstelle::LOW);
			ausgang.at(0)->getPegel();

		}

		else if (eingang.at(0)->getPegel() == Schnittstelle::HIGH && eingang.at(1)->getPegel() == Schnittstelle::LOW) {

			ausgang.at(0)->setPegel(Schnittstelle::HIGH);
			ausgang.at(0)->getPegel();

		}

		else if (eingang.at(0)->getPegel() == Schnittstelle::UNDEFINED || eingang.at(1)->getPegel() == Schnittstelle::UNDEFINED) {

			ausgang.at(0)->setPegel(Schnittstelle::UNDEFINED);
			ausgang.at(0)->getPegel();

		}


	}





};