/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615
  Date: 2/11/2020
  Description of the program: Function of time diliation.
  
*/
#include "utils.h"
#include<stdio.h>
#include<math.h>


double degreesToRadians(double degree) {
	double radian;
	
	radian = (degree*M_PI)/180;
	
	return radian;
}
double getAirDistance(double originLatitude,double originLongitude,double destinationLatitude,double destinationLongitude) {
	double originLatitudeR = degreesToRadians(originLatitude);
	double originLongitudeR = degreesToRadians(originLongitude);
	double destinationLatitudeR = degreesToRadians(destinationLatitude);
	double destinationLongitudeR = degreesToRadians(destinationLongitude);
	double distance;
	double differnceLongitude; 
	
	differnceLongitude = destinationLongitudeR-originLongitudeR;
	
	distance = acos(sin(originLatitudeR) *sin(destinationLatitudeR) + cos(originLatitudeR) *cos(destinationLatitudeR) *cos(differnceLongitude))*6371;
	
	return distance;
}
double lorentzTimeDilation(double t, double percentC) {
	double timeDilation;
	
	timeDilation = t/(sqrt(1-pow(percentC,2)));
	
	return timeDilation;
}




















