#ifndef DATE_H
#define DATE_H
struct Date
{

    int day;
    int month;
    int year;
    Date(){}
    Date(int tag, int monat, int jahr)
    {
        day = tag;
        month = monat;
        year = jahr;
    }
    
};
std::string to_string(Date d, bool numbered_months);
#endif
