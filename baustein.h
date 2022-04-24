#pragma once
#include <vector>
#include "schnittstelle.h"


class Baustein {

	
protected:

	std::string name;  
	std::vector <Schnittstelle*> eingang;  
	std::vector <Schnittstelle*> ausgang; 
	   
	
public :

	friend void test2(Baustein* b);
	friend void test3(Baustein* b);

	void addEingang(Schnittstelle* schnittstelle) {

		eingang.push_back(schnittstelle);

	}

	void addAusgang(Schnittstelle* schnittstelle) {

		ausgang.push_back(schnittstelle);

	}

	virtual void print() {

		std::cout << "Baustein : " << name << std::endl;

		for (unsigned int i = 0; i < eingang.size(); i++) {

			std::cout << "Eingang " << i << " : Pegel = " << eingang.at(i)->getPegel() << std::endl; 
		}

		for (unsigned int i = 0; i < ausgang.size(); i++) {

			std::cout << "Ausgang " << i << " : Pegel = " << ausgang.at(i)->getPegel() << std::endl;
		}


	}

	virtual void update() = 0;

}; 