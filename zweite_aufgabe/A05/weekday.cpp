#include <iostream>
#include "weekday.hpp"
#include "date.hpp"

/*
This function takes a Date data structure as input and returns the name of the 
weekday as a string.
*/
std::string weekday(Date date)
{
    int d = date.day;
    int m = date.month;
    int y = date.year;
    
    int mm;
	int yy;
	int century;
	int year_in_century;
	int w;
	std::string woch = "Not assigned";
	std::string weekdays[] = {"Sonntag","Monntag","Dienstag","Mittwoch",
	                          "Donnerstag", "Freitag","Samstag"};
		
	// Monat korregieren
	//mm =1 if m = 3; mm = 11 if m = 1; mm = 12 if m = 2

	//Jahr korregieren
	//Falls m < 3: Jahr um eins erniedrigen (Januar, Februar zählen zum vorhergehende Jahr)

	if (m > 2)
	{
		mm = m-2;

		yy = y;
	}
	else 
	{
		mm= m+10;
		yy = y -1;
	}

	century = yy/100;
	
	year_in_century = yy % 100;

	//Formel von Gauss:
	// wochentag = (d + ((26mm - 2)/10) + year_in_century + (year_in_century/4) +
	// (century/4) - 2*century) mod 7 = [0,6] für Son - Sams
    
    w = (d + ((26*mm -2)/10) + year_in_century + (year_in_century/4) + (century/4)
        - 2*century) % 7;

    if (w < 0)
        w += 7;
        /*Getting rid of ugly switch statement
	switch(w)
	{
		case 0:
			woch = "Sonntag";
			break;
		case 1:
			woch = "Montag";
			break;
		case 2:
			woch = "Dienstag";
			break;
		case 3:
			woch = "Mittwoch";
			break;
		case 4:
			woch = "Donnerstag";
			break;
		case 5:
			woch = "Freitag";
			break;
		case 6:
			woch = "Samstag";
			break;
	}
	*/
    //std::cout << w << std::endl;
	return weekdays[w];

}
