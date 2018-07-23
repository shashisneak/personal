
#include "typedefs.h"
#include <iostream>
using namespace std;

class Bird
{
	public:
		void Fly ( void );
		void Eat( void );
		void Sleep ( void );
		void SetSize( UINT8 ucSize );
	private:
		
		UINT8	ucColor;
		UINT8	ucSize;
		UINT8	ucWeight;
};

