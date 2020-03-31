#include "converter.h"

double centimetres_to_millimetres(double centimetres)
{	
	double millimetres;	
	millimetres = centimetres * MILLIMETRES_IN_CENTIMETRE;
	return millimetres;
	//return centimetres * MILLIMETRES_IN_CENTIMETRE;
}

double metres_to_centimetres(double metres)
{
	double centimetres;
	return centimetres * centimetres;
}