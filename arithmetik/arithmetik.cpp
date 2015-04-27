#include <iostream>
#include <cmath>


void rest()
{
	int a, b;
	
	std::cout << "Bitte zwei ganze Zahlen eingeben: ";
	std::cin >> a >> b;

	double rest;

	rest = ((double)a/(double)b - a/b) * b;
	
	//rest = a%b;
	
	std::cout << "Der rest von " << a << " / " << b << " ist " << rest << std::endl;
}

std::string wochestag(int d, int m, int y)
{
	int mm;
	int yy;
	int century;
	int year_in_century;
	int w;
	std::string woch = "Not assigned";
		

	/*
    std::cout << "Bitte Datum (als DD MM YYYY) eingeben: ";
	
	std::cin >> d >> m >> y;
	*/	

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
	
    //std::cout << w << std::endl;
	return woch;
}

int main()
{
    
    int wahl;
    int tag, monat, jahr;

    std::cout << "Bitte wählen sie ein program: "<< std::endl;
    std::cout << "1. Rest" << "\n" << "2. Wochestag" << std::endl;
    std::cin >> wahl;

    switch(wahl)
    {
        case 1:
            rest();
            break;
        case 2:
            std::cout << "Bitte Datum (als DD MM YYYY) eingeben: ";
            std::cin >> tag >> monat >> jahr;
            std::cout << "Der " << tag << "." << monat << "." << jahr << 
                    " ist ein " << wochestag(tag,monat,jahr) <<std::endl;
            break;
    }

}


