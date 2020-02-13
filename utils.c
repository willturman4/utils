/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615
  Date: 2/11/2020
  Description of the program: Following program determines the force of an object.
  
*/
#include "utils.h"
#include<stdio.h>
#include<math.h>


double degreesToRadians(double degree) {
	double radian;
	
	radian = (degree*pi)/180;
	
	return radian;
}
double getAirDistance(double originLatitude,double originLongitude,double destinationLatitude,double destinationLongitude) {
	double distance;
	double differnceLongitude; 
	double radian;
	
	differnceLongitude = destinationLongitude-originLongitude;
	
	distance = acos(sin(radian*originLatitude) *sin(radian*destinationLatitude) + cos(radian*originLatitude) *cos(radian*destinationLatitude) *cos(radian*differnceLongitude))*6371;
	
	return distance;
}
double lorentzTimeDilation(double t, double percentC) {
	double timeDilation;
	
	
	timeDilation = t/sqrt(1-(percentC));
	
	return timeDilation;
}



























