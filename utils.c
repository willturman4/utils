/*
  Programmer's Name:William Turman, David Ho
  NUID: 05032615
  Date: 2/11/2020
  Description of the program: Following program determines the force of an object.
  
*/

#include<stdio.h>
#include<math.h>

//TODO: place your function prototypes here
double degreesToRadians(double degree);
double getAirDistance(double originLatitude,double originLongitude,double destinationLatitude,double destinationLongitude);
double lorentzTimeDilation(double t, double percentC);

int main(void) {
	double originLatitude;
	double originLongitude;
	double destinationLatitude;
	double destinationLongitude;
	
	printf("please enter the latitude of the first location.");
	scanf("%lf", &originLatitude);
	
	printf("please enter the longitude of the first location.");
	scanf("%lf", &originLongitude);
	
	printf("please enter the latitude of the second location.");
	scanf("%lf", &destinationLatitude);

	printf("please enter the longitude of the second location.");
	scanf("%lf", &destinationLongitude);

	//TODO: call your functions here
	
	
	
	
	
	//TODO: Print the results here
	printf("Air distance between the two coordinates: %lf\n", distance);
	printf("Dilated time experience: %lf\n", );
return 0;
}
double degreesToRadians(double degree) {
	double radian;
	
	radian = (degree*pi)/180;
	
	return radian;
}
double getAirDistance(double originLatitude,double originLongitude,double destinationLatitude,double destinationLongitude) {
	double distance;
	double differnceLongitude; 
	
	differnceLongitude = destinationLongitude-originLongitude;
	
	distance = acos(sin(radian*originLatitude) *sin(radian*destinationLatitude) + cos(radian*originLatitude) *cos(radian*destinationLatitude) *cos(radian*differnceLongitude))*6371;
	
	return distance;
}
double lorentzTimeDilation(double t, double percentC) {
	
	
	
	
}



























