#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

struct complex
{
		private:
			float real ;
			float imag ;

		public: 
			complex();					 //constructor without input parameters
			complex(float r);   		 //constructor with one input parameters
			complex(float r, float i);   //constructor with two input parameters
			~complex();    				 //Destructor: only one for each class
			void setReal(float r) ; 	 //setter for the real attribute
			void setImag(float i) ;		 //getter for the imaginary attribute	
			float getReal();			 //getter for real attribute
			float getImag();			 //getter gor imag attribute	
			void print();				 //a member to perform printing behaviour
};
/************* implementation of the constructor without input parameters **************/
complex :: complex()
{
	real = imag = 0 ;
	cout << "\n default constructor is calling";
}
/************* implementation of the constructor with one input parameters **************/
complex :: complex(float r)
{
	real = imag = r ;
	cout << "\nconstructor with one parameter is calling";
}
/************* implementation of the constructor with two input parameters **************/
complex :: complex(float r, float i)
{
	real = r ; imag = i ;
	cout << "\nconstructor with two parameters is calling";
}
/****************** implementation of the Destructor ******************/
complex :: ~complex()
{
	cout<<"\n Destructor is calling" ;
}
/************* implementation of the setReal Method/Function **************/
void complex :: setReal(float r)
{
	real = r ;
}
/************* implementation of the setImag Method/Function **************/
void complex::setImag(float i)
{
	imag = i ;
}
/************* implementation of the getReal Method/Function **************/
float complex :: getReal()
{
	return real ;
}
/************* implementation of the getImag Method/Function **************/
float complex :: getImag()
{
	return imag ;
}
/************* implementation of the print Method/Function **************/
void complex :: print()
{
	if (imag<0)
	{
		cout<<endl<<real<<" - "<<fabs(imag)<<"i"<<endl; //printing real - imag if imag < 0
	}
	else
	{
		cout<<endl<<real<<" + "<<imag<<"i"<<endl;		  //printing real + imag if imag > 0
	}
}
/*************** Functions prototype *****************/
complex add (complex c1, complex c2);
complex sub (complex c1, complex c2);
void swap(complex& c1, complex& c2);
void main (void)
{

	clrscr();
	complex compNum1, compNum2(5,6);
	compNum1.setReal(2);
	compNum1.setImag(3);
	compNum1.print();
	compNum2.print();
	swap(compNum1,compNum2);
	compNum1.print();
	compNum2.print();
	getch();


}
/************* implementation of the add Function **************/
complex add (complex c1, complex c2)
{
	complex temp ;
	temp.setReal(c1.getReal()+c2.getReal());
	temp.setImag(c1.getImag()+c2.getImag());
	return temp ;
}
/************* implementation of the sub Function **************/
complex sub (complex c1, complex c2)
{
	complex temp ;
	temp.setReal(c1.getReal()-c2.getReal());
	temp.setImag(c1.getImag()-c2.getImag());
	return temp ;
}



void swap(complex& c1, complex& c2)
{
 complex temp ;
 temp = c1;
 c1 = c2 ;
 c2 = temp;

}