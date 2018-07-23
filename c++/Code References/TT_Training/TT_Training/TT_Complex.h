
#include "typedefs.h"
#include <iostream>
using namespace std;

class Complex
{
	public:
		Complex ( void );	// constructor
		Complex ( float fVal );	// constructor
		Complex ( float i_fReal, float i_fImag );	// constructor
		Complex ( const Complex & objInit );	// constructor
		~Complex ( void );	// Destructor

		//void Set ( float i_fVal );
		void Set ( float i_fReal, float i_fImag = 0 );
		void Set ( Complex &objC );
		void Display ( void );


		const Complex & operator = ( const Complex &objC );
		const Complex & operator = ( float fVal );
			
		operator float()
		{
			return this->fReal;
		}

	private:
		
		float	fReal, fImag;	//	
};

#if 0
Complex obj1;
obj1.Set ( 10, 20 );

Complex obj2;
obj2.Set ( obj1 );
obj2 = obj1;

obj2 = 10;

obj2 = obj1 + 50;

::		?:	*	sizeof

#endif /* #if 0 */






