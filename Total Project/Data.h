#pragma once
#include "Libraries.h"
struct Date {

	int year = 0;
	int month = 0;
	int day = 0;
	int hour = 0;
	int minute = 0;

	void fillDateRus() {
		cout << "¬ведите год -> ";
		cin >> year;
		cout << "¬ведите мес€ц -> ";
		cin >> month;
		cout << "¬ведите день -> ";
		cin >> day;
		cout << "¬ведите часы -> ";
		cin >> hour;
		cout << "¬ведите  минуты-> ";
		cin >> minute;
	}
	void fillDateEngl() {
		cout << "Enter year -> ";
		cin >> year;
		cout << "Enter month -> ";
		cin >> month;
		cout << "Enter day -> ";
		cin >> day;
		cout << "Enter hours -> ";
		cin >> hour;
		cout << "Enter minutes -> ";
		cin >> minute;
	}
	void getNowDate() {
		// создаем стд объект даты и времени
		struct tm *tim = new tm;
		// определ€ем текущую млисекунду
		time_t tt = time(NULL);
		//заполн€ем все пол€ стд структуры
		localtime_s(tim, &tt);
		//заполн€ем нужные пол€ нашей структуры
		year = 1900 + tim->tm_year;
		month = 1 + tim->tm_mon;
		day = tim->tm_mday;
		hour = tim->tm_hour;
		minute = tim->tm_min;
	}
	void printDate() {
		cout << year << "/" << month / 10 << month % 10 << "/" << day << "\t\t\t\t\t\t" << hour << ":" << minute;
	}
	void printDateforChek() {
		cout << "#################################################################" << endl;
		cout << "#                                            " << hour << ":" << minute << "              #" << endl;
		cout << "#                                       " << year << "/" << month / 10 << month % 10 << "/" << day << "              #" << endl;
		
	}

	char* toString()
	{
		char* str = new char[11];
		sprintf(str, "%d/%d%d/%d%d", year, month / 10, month % 10, day / 10, day % 10);
		return str;
	}

	bool isLeapYear() {
		if (year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0))
			return true;
		else
			return false;
	}

	int monthDays() {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			return 31;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			return 30;
		else if (isLeapYear())
			return 29;
		else
			return 28;
	}

	void toNextDay() {
		if (month == 12 && day == 31)
		{
			month = 1;
			day = 1;
			year++;
		}
		else if (day == monthDays())
		{
			day = 1;
			month++;
		}
		else
		{
			day++;
		}
	}
};




