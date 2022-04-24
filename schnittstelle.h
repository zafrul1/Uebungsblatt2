#pragma once
#include <iostream>
 
	class Schnittstelle {
	private:

		short pegl;


	public:

		const static short HIGH = 1; 
		const static short LOW = 0; 
		const static short UNDEFINED = -1; 
		
		short getPegel() {

			return pegl;

		}

		bool setPegel(short pegel) {

		
			if (pegel == HIGH ) {
				pegl = HIGH; 
				return true;
			}
			else if (pegel == LOW){
				pegl = LOW;
				return true;
			}
			else {

				pegl = UNDEFINED;
				return false; 
			}
			

		}

	};

	
