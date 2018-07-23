
#include "TT_Complex.h"

Complex::Complex ( void )
{
	cout << "Complex::Complex() : << @" << this  << endl;

	fReal = 0.0;	// => this.fReal = 0.0;
	fImag = 0.0;
}

Complex::Complex ( float fVal )
{
	cout << "Complex::Complex(( float fVal) : << @" << this << endl;

	fReal = fVal;	// => this.fReal = 0.0;
	fImag = fVal;
}

Complex::Complex ( float i_fReal, float i_fImag )
{
	cout << "Complex::Complex((float i_fReal, float i_fImag ) : << @" << this << endl;

	this->fReal = i_fReal;
	this->fImag = i_fImag;
}

Complex::Complex ( const Complex & objInit )
{
	cout << "Complex::Complex( const Complex & objInit ) : << @" << this << endl;

	this->fReal = objInit.fReal;
	this->fImag = objInit.fImag;
}

void Complex::Set ( float fReal, float fImag )
{
	cout << "Set( float, float) : << " << this << endl;

	this->fReal = fReal;	// => this.fReal =i_fReal;
	this->fImag = fImag;
}

void Complex::Set ( Complex &objC )
{
	cout << "Set( Complex) : << " << this << endl;

	this->fReal = objC.fReal;	// => this.fReal =i_fReal;
	this->fImag = objC.fImag;
}

void Complex::Display ( void )
{
	cout << "Complex [ @" << this << " ] :" << fReal << " +j " << fImag << endl;
}

const Complex & Complex::operator = ( const Complex &objC )
{
	cout << "Complex::operator =  ( const Complex &objC )" << endl;

	this->fReal = objC.fReal;	// => this.fReal =i_fReal;
	this->fImag = objC.fImag;

	return *this;
}

const  Complex & Complex::operator = ( float Val )
{
	cout << "Complex::operator = ( int )" << endl;

	this->fReal = Val;	// => this.fReal =i_fReal;
	this->fImag = Val;

	return *this;
}

Complex::~Complex ( void )
{
	cout << "Complex::~Complex : << " << this << endl;
}