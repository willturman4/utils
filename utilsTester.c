/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615
  Date: 2/11/2020
  Description of the program: Function of time diliation.
  
*/

#include<stdio.h>
#include "utils.h"
#include<math.h>

int main(void) {
	double originLatitude=15;
	double originLongitude=15;
	double destinationLatitude=15;
	double destinationLongitude=16;
	
	double expected_getAirDistance=107.4059;
	double resultA=getAirDistance(originLatitude, originLongitude, destinationLatitude, destinationLongitude);
	if (fabs(expected_getAirDistance-resultA)<=0.0001) {
		printf("Passed\n");
	}
	else{
		printf("Failed");
	}
	double t=2;
	double percentC=.5;
	
	double expected_lorentzTimeDilation=2.3094;
	double resultB=lorentzTimeDilation(t, percentC);
	if (fabs(expected_lorentzTimeDilation-resultB)<=.0001) {
		printf("Passed\n");
	}
	else{
		printf("Failed\n");
	}
return 0;
}