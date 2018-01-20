/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate minimum passenger efficiency
*/
#include "stdio.h"
#define SUBS 0.08
void print_chart(int, double, double, double, double);
void main()
{
	double efficiency, gasoline, distance, subs;
	int passengers, input_status;
	
	printf("CARPOOLS MEETING MINIMUM PASSENGER EFFICIENCY OF 25 PASSENGER KM/L");
	
	printf("\nPassengers %3c Weekly Commute (km) %3c Gasoline Consumption(L) %3c Efficiency (pass km/L) %3c Weekly Subsidy($)", ' ', ' ', ' ', ' ');
	
	while((input_status = scanf("%d%lf%lf", &passengers, &distance, &gasoline)) != EOF)
	{
		scanf("%d", &passengers);
		scanf("%lf", &distance);
		scanf("%lf", &gasoline);
		efficiency = (passengers * distance) / gasoline;
		subs = passengers * distance * SUBS;
		print_chart(passengers, efficiency, gasoline, distance, subs);
	}
	
}

void print_chart(int passengers, double efficiency, double gasoline, double distance, double subs)
{
	printf("\n %d %f %f %f %f", passengers, distance, gasoline, efficiency, subs);
}
