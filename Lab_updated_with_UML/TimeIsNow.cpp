/**
*	@file TimeIsNow.cpp
*	@author Kirill Kotsko
*	@version 1.2
*/

#include "TimeIsNow.h"

using namespace std;

TimeIsNow::TimeIsNow() {
	GMT = 2;
	update();
}

TimeIsNow::~TimeIsNow() {}

void TimeIsNow::update() { 
    time_t seconds = time(0);
	seconds += 3600 * (-2) + GMT * 3600;
    tm* timeinfo = localtime(&seconds);
	current_date_with_time.day = timeinfo->tm_mday;
	current_date_with_time.month = timeinfo->tm_mon + 1;
	current_date_with_time.year = timeinfo->tm_year + 1900;
	current_date_with_time.hour = timeinfo->tm_hour;
	current_date_with_time.minute = timeinfo->tm_min;
	current_date_with_time.second = timeinfo->tm_sec;
}

void TimeIsNow::change_GMT(int value) {
    GMT = value;
}

stringstream TimeIsNow::show_current_date_with_time() {
    stringstream s;
	update();
    s << current_date_with_time << "GMT";
    if (GMT >= 0) s << "+";
    s << GMT;
    return s;
}

DateWithTime TimeIsNow::get_current_date_with_time() {
	update();
	return current_date_with_time;
}
