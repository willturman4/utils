
#include<stdio.h>
#include "sum.h"

int main(void) {
	double originLatitude=15;
	double originLongitude=15;
	double destinationLatitude=15;
	double destinationLongitude=16;
	
	double expected_getAirDistance=107.4059;
	double resultA=getAirDistance(originLatitude, originLongitude, destinationLatitude, destinationLongitude);
	if (fabs(expected_getAirDistance-result)<=0.0001) {
		printf("Passed")
	}
	else{
		printf("Failed");
	}
	double t=2
	double percentC=.25
	
	double expected_lorentzTimeDilation=
	double resultB=lorentzTimeDilation(t, percentC);
	if (fabs(expected_lorentzTimeDilation-resultB)<=.0001) {
		printf("Passed")
	}
	else{
		printf("Failed");
	}
return 0;
}