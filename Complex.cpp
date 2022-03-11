#include "Complex.h"
#include "Complex.h"
void cplx::print()
{
	if (im >= 0)
		cout << re << "+" << im << "i" << endl;
	else
		cout << re << "-" << -1 * im << "i" << endl;
}
cplx cplx::sum(cplx a)
{
	return cplx{ a.re + re, a.im + im };

}
cplx cplx::minus(cplx a)
{
	return cplx{ a.re - re, a.im - im };
}
cplx cplx::mult(cplx a)
{
	return cplx{ a.re*re-a.im*im, a.im*re +im*a.re };
}
cplx cplx::di(cplx b)
{
	return cplx { (re * b.re + im * b.im) / (b.re * b.re + b.im * b.im) ,(im * b.re - re * b.im) / (b.re * b.re + b.im * b.im) };
}
double cplx::m()
{
	return sqrt(re * re + im * im);
}