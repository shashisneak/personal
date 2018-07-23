

#include "TT_Complex.h"

class TT_Main
{
	public:
		void ExectuteTest( void )
		{
#if 0
			cout << ( UINT32 )Complex::sucCount << endl;

			Complex::FuncStatic();

			Complex	objC1, objC2;
			
			cout << "@ObjC1 : " << &objC1 << endl; 
			objC1.Display ();
			objC1.Set ( 10, 20 );
			objC1.Display ();
			
			{
				Complex objC3;
				objC3.Display();
			}

			cout << "@ObjC2 : " << &objC2 << endl; 

			objC2.Set ( 30, 49 );
			objC2.Display();
#endif /* #if 0 */
		
			Complex	objC1;
			Complex	objC2( 99.0f );
			Complex	objC3( 19.0f, 29.05f );

			cout << "\n1>===================================\n\n";

			Complex objC4 = objC3;	// Copy Constructor
			objC4.Display();

			cout << "\n2>===================================\n\n";

			Complex objC5( objC4 );
			objC5.Display();

			cout << "\n3>===================================\n\n";

			Complex objC7;
			objC7 = objC5;		// => objC7.operator = ( objC5 )
			objC7.Display();
			objC7 = 19.0f;			  // objC7.operator = ( float )
			objC7.Display();

			float val;
			val = objC7;	// val = float( objC7 ); => val = ojC7.operator float()

			cout << "Val : " << val << endl;

			cout << "\n4>===================================\n\n";

			Complex objC6;
			objC6.Set( objC5 );

			// int a =2; int a(2);
			// a = 2; a(2);

			//DT*	new DT<[ Size ]>;

			// int *p = new int[ 10 ];

			cout << "\n5>===================================\n\n";

			Complex ObjC7, objC8;
			objC8 = objC7 = objC2;

			// objC8.= ( objC7.=(objC2) )

			objC8.Display();

			cout << "\n5>===================================\n\n";

			class Temp
			{
				private:
					Temp ( int a, int b  )
					{
						cout << "Temp\n";
					}
				public:
#if 0
					Temp ( int a, int b  )
					{
						cout << "Temp\n";
					}

					explicit Temp ( int c )
					{
						cout << "Temp : Single\n";
					}
#endif /* #if 0 */		
					void get( void ) const
					{
						cout << "get()\n";
					}

					static Temp * CreateObj( void )
					{
						return new Temp( 10, 29 );
					}

					mutable int r;
					int m;
			};

			Temp *po = Temp::CreateObj();
			po->get();
#if 0
			Temp a(10, 20 );
			Temp b( 30 );
			Temp c( 50 );
			//Temp c = 50;	// Temp( int )

			const Temp d = a;
			d.r = 10;
			d.get();
			//d.m = 20;
#else
			

#endif /* #if 0 */

#if 0
	
			Class A;
			Class B;

			A objA; 
			B objB;

			objA = objB;	// (destination)	in Class A => objA. operator = ( B );
							// (source)			in class B => objB.operator A()

			// float = objB	//	(source)		in Class B => objB.operator float()



			Complex *pobj = new Complex( 30, 40 );
		
			pobj->Display();

			delete pobj;

			Complex **pobj1 = new Complex *[ 10 ];
			//pobj1[ 0 ] = new Complex;

			delete []pobj1;

			cout << "\n6>===================================\n\n";
#endif /* #if 0 */

		}

		static int TestMain( INT32 argc, CHAR *argv[] )
		{
			TT_Main	objMain;
			objMain.ExectuteTest();

			return 0;
		}
};


INT32 main ( INT32 argc, CHAR *argv[] )
{
	return TT_Main::TestMain( argc, argv );
}