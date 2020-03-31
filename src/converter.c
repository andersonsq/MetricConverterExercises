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
	centimetres = metres * CENTIMETRES_IN_METRE;
	return centimetres;
	//return metres * CENTIMETRES_IN_METRE;
}

double kilometres_to_metres(double kilometres)
{
	double metres;
	metres = kilometres * METRES_IN_KILOMETRE;
	return metres;
	//return metres * METRES_IN_KILOMETRE;
}
