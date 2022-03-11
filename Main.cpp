#include "Complex.h"

int main()
{
	cplx a{ 5,7 }, b{ 4,8 }, c{ 7,-5 };
	string s;
	cin >> a.re >> a.im;
	cin >> s;
	cin >> b.re >> b.im;
	if (s == "+")
		a.sum(a).print();
	if (s == "-")
		a.minus(b).print();
	if (s == "*")
		a.mult(b).print();
	if (s == "/")
		a.di(b).print();

	/*freopen("complex.txt", "r", stdin);
	cplx a;
	cplx ans;
	int c=0;
	while (cin >> a.re >> a.im)
	{
		if (c < a.m())
		{
			c = a.m();
			ans = a;
		}
	}
	ans.print();
	return 0;*/
}