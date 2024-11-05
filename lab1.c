#include <stdio.h>
#include <string.h>

struct Day
{
	char name[20];
	int date;
	char activity[100];
};


int main()
{
	struct Day calendar[7];
	
	strcpy (calendar[0].name,"Monday");
	calendar[0].date=1;
	strcpy (calendar [0].activity,"Work from 9am to 5pm");
	
	strcpy (calendar[1].name,"Tuesday");
	calendar[1].date=2;
	strcpy (calendar [1].activity,"Meeting at 10am");
	
	strcpy (calendar[2].name,"Wednesday");
	calendar[2].date=3;
	strcpy (calendar [2].activity,"Dinner with friends at 7pm");
	
	strcpy (calendar[3].name,"Thursday");
	calendar[3].date=4;
	strcpy (calendar [3].activity,"Gym at 6pm");
	
	strcpy (calendar[4].name,"Friday");
	calendar[4].date=5;
	strcpy (calendar [4].activity,"Movie at 8pm");
	
	strcpy (calendar[5].name,"Saturday");
	calendar[5].date=6;
	strcpy (calendar [5].activity,"Weekend Getaway");
	
	strcpy (calendar[6].name,"Sunday");
	calendar[6].date=7;
	strcpy (calendar [6].activity,"Relax and Recharge");
	
	printf("\n");

	
	for(int i=0;i<7;i++)
	{
		printf("%s (Date: %d): %s\n\n",calendar[i].name,calendar[i].date,calendar[i].activity);
	}
	
	return 0;
	
}
		
		
		
		
		
