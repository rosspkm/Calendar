#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int year;
int DaysOfMonth = 0;
int DayOfWeek = 0;
int days = 1;
int day = 1;

string month;

int main()
{
	cout << "Enter the 4 digit year you would like a calendar for(ex. 2004): ";
	cin >> year; //inputs year
	cout << endl;
	cout << "Enter the number for the day of the week the first lands on(1-Sun, 2-Mon, 3-Tues, 4-Wed, 5-Thur, 6-Fri, 7-Sat: ";
	cin >> DayOfWeek; //inputs first day of year
	cout << endl;
	for (int i = 0; i < 12; i++) // loop to go up for months
	{

		switch (i) //switch to output each month
		{
		case 0:
			month = "January";
			DaysOfMonth = 31;
			break;
		case 1:
			month = "February";
			if (year % 4 == 0)
			{
				DaysOfMonth = 29;
			}
			else
				DaysOfMonth = 28;
			break;
		case 2:
			month = "March";
			DaysOfMonth = 31;
			break;
		case 3:
			month = "April";
			DaysOfMonth = 30;
			break;
		case 4:
			month = "May";
			DaysOfMonth = 31;
			break;
		case 5:
			month = "June";
			DaysOfMonth = 30;
			break;
		case 6:
			month = "July";
			DaysOfMonth = 31;
			break;
		case 7:
			month = "August";
			DaysOfMonth = 31;
			break;
		case 8:
			month = "September";
			DaysOfMonth = 30;
			break;
		case 9:
			month = "October";
			DaysOfMonth = 31;
			break;
		case 10:
			month = "November";
			DaysOfMonth = 30;
			break;
		case 11:
			month = "December";
			DaysOfMonth = 31;
			break;
		default:
			cout << "ERROR" << endl;
			break;
		}

		cout << endl;
		cout << setw(20) << month << ' ' << year << endl;
		cout << "--------------------------------------------" << endl; //calendar output
		cout << setw(7) << "Sun" << setw(7) << "Mon" << setw(7) << "Tues" << setw(7) << "Wed" << setw(7) << "Thur" << setw(7) << "Fri" << setw(7) << "Sat" << endl;
		for (int count = 1; count < 2; count++)
		{
			//cout << setw(5) << ' ' << endl;
			days = day;
			day = 1;
			if (DayOfWeek > 1) //detects the day of the week if not the first
			{
				for (int point = 1; point < DayOfWeek; point++)
				{
					cout << setw(7) << " ";
				}
			}
			cout << setw(7) << day++;
			while (days <= DaysOfMonth) //adds more days and output for calendar
			{
				DayOfWeek++;

				if (DayOfWeek > 7)
				{
					DayOfWeek = 1;
					cout << endl;
					cout << setw(7) << days++;
				}
				else
				{
					cout << setw(7) << days++;
				}
			}
			cout << endl;
		}
	}
	return 0;
}