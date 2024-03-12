#include<stdio.h>
int main()
{
	int bike_milage,week;
	float distance,per_liter,Total_cost,t_days_per_week,milage,Total;
	distance=36.7*2;
	bike_milage=15;
	per_liter=102.34;
	week=6;
	t_days_per_week=week*distance;
	milage=t_days_per_week/bike_milage;
	Total=milage*per_liter;
	printf("%f is the Total cost",Total);
	return 0;
}
