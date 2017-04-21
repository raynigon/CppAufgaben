#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

typedef double(*mathFunction)(double inX);

double quadFunction(double inX);

double trapez(mathFunction fct, double topLimit, double bottomLimit)
{
	double topY = fct(topLimit);
	double bottomY = fct(bottomLimit);
	double minY = topY > bottomY ? bottomY : topY;
	double maxY = topY > bottomY ? topY : bottomY;
	double rect = (topLimit-bottomLimit)*minY;
	double tria = (topLimit - bottomLimit)*(maxY - minY);
	return rect + tria;
}

double integral(mathFunction fct, double topLimit, double bottomLimit, double delta)
{
	double limit = bottomLimit;
	double res = 0.0;
	for (; (limit + delta) <= topLimit;limit +=delta)
		res += trapez(fct, limit + delta, limit);

	delta = topLimit - limit;
	if(delta>0)
		res += trapez(fct, limit + delta, limit);

	return res;
}

int main()
{
	cout << "Integral von f(x) im Bereich von 0 bis 10" << endl;
	cout << integral(quadFunction, 10.0, 0.0, 0.000001) << endl;



	for (int i = 0; i < INT_MAX; i++)
		++i;

}

double quadFunction(double inX)
{
	return 4 * (inX*inX) + 2 * inX + 3;
}