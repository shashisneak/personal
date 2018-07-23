
#include "TT_Class.h"

void Bird::Fly ( void )
{
	cout << "Fly" << endl;
}

void Bird::Eat( void )
{
	cout << "Eat" << endl;
}

void Bird::Sleep ( void )
{
	cout << "Sleep" << endl;
}

void Bird::SetSize( UINT8 i_ucSize )
{
	if ( i_ucSize > 10 )
		ucSize = i_ucSize;
}