/*CIT237 Extracredit 2
/*Hanfei XU
*/

#ifndef CD_H
#define CD_H
#include<string>
using namespace std;


// base class

class Cd { // represents a CD disk
protected: 
	char *performers;
	char *label;
	int selections; // number of selections
	double playtime; // playing time in minutes
	//hold length counter of performers and label array
	//Since the original source array of chars are passed to constructor
	//as pointer, sizeof(array)is nolonger usable. 
	int cntP;
	int cntL;

public:
	Cd(char* , char*, int n, double x);
	Cd(const Cd &d);
	Cd();
	~Cd(); // this is called after "copy = c2;", which is too early... 

	//made virtual for polymorphism
	virtual void report() const; // reports all the CD data
	virtual Cd&  operator=(const Cd &d);

	/*
	template <typename T, size_t N>
	size_t SizeOfArray( const T(&)[ N ] ){return N;}
	*/
};

#endif

