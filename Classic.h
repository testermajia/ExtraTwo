#ifndef CLASSIC_H
#define CLASSIC_H
#include "Cd.h"
#include <iostream>
using namespace std;

class Classic: public Cd{
protected: 
	char *primary;
	
public:
	Classic();
	Classic(char* , char* , char* , int n, double x);
	~Classic();
	Classic(const Classic &right);
	
	virtual void report() const;
	virtual Classic&  operator=(const Classic &right);
};


#endif