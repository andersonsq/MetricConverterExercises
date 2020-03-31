#include "converter.h"

/*TASK 2*/
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

/*TASK 3*/

double millimetres_to_centimetres(double millimetres)
{
	double centimetres;
	centimetres = millimetres / MILLIMETRES_IN_CENTIMETRE;
	return centimetres;
	//return centimetres / METRES_IN_KILOMETRE;
}

double centimetres_to_metres(double centimetres)
{
	double metres;
	metres = centimetres / CENTIMETRES_IN_METRE;
	return metres;
	//return metres / CENTIMETRES_IN_METRE;
}

double metres_to_kilometres(double metres)
{
	double kilometres;
	kilometres = metres / METRES_IN_KILOMETRE;
	return kilometres;
	//return kilometres / METRES_IN_KILOMETRE;
}

/*TASK 4*/

double metres_to_millimetres(double metres)
{
	double millimetres;
	millimetres = metres * METRES_IN_KILOMETRE;
	return millimetres;
	//return metres * METRES_IN_KILOMETRE;
}

double millimetres_to_metres(double millimetres)
{
	double metres;
	metres = metres / METRES_IN_KILOMETRE;
	return metres;
	//return metres / METRES_IN_KILOMETRE;
}

