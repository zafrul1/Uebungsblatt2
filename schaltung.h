#pragma once
#include "schnittstelle.h"
#include "baustein.h"
#include <vector>


class Schaltung : public Baustein {

protected :

	std::vector <Schnittstelle*> intern; 
	std::vector <Baustein*> bausteine; 
};
