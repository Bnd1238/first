#ifndef CH
#define CH

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdio.h>
using namespace std;
struct cplx 
{
	double re = 0;
	double im =0 ;
	void print();
	cplx sum(cplx a);
	cplx minus(cplx a);
	cplx mult(cplx a);
	cplx di(cplx a);
	double m();
};
#endif
