# A.20.1
C++ exercise

Set with public hereditarity the hierarchy of classes A, B, and C where A is the base class. Each should contain an integer private member and the public functions get() and show().
Implement the class in such way so that the following program works.

int main()
{
  C c;
	c.get(); /*The program should take successively 3 integers which are stored to the corresponding fields of the classes */
	c.show(); /*The program should show the values of the 3 integer fields successively */
	
	return 0;
}

 The output of the program should be the following. Supposedly, the user enters the values 10,20 and 30.

Class_A input:10
Class_B input:20
Class_C input:30
Class_C output:30
Class_B output:20
Class_A output:10
