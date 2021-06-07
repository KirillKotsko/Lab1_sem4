#include "Test.h"

void TestDateWithTimeMinusDateWithTime() {
	TimeManagment test({ 6, 8, 2020, 14, 55, 32 }, { 9, 2, 2019, 20, 33, 6 });
	ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 543, 18, 22, 26 }));
	test.set_date_with_time(DateWithTime({ 10, 8, 2020, 14, 55, 32 }), 2);
    ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 4, 0, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 2, 3, 2019, 20, 33, 6 }), 1);
	test.set_date_with_time(DateWithTime({ 9, 2, 2019, 20, 33, 6 }), 2);
	ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 21, 0, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 9, 2, 2019, 5, 12, 59 }), 1);
	ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 0, 15, 20, 7 }));
	test.set_date_with_time(DateWithTime({ 9, 2, 2020, 20, 33, 7 }), 1);
	ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 365, 0, 0, 1 }));
	test.set_date_with_time(DateWithTime({ 9, 2, 2021, 20, 33, 7 }), 2);
	ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 366, 0, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 19, 6, 1950, 19, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 05, 03, 2012, 21, 0, 0 }), 2);
	ASSERT_EQUAL(test.get_difference(), DifferenceBetweenDateWithTime({ 22540, 2, 0, 0 }));

}

void TestDateWithTimeAddDifference() {
	TimeManagment test({ 6, 8, 2020, 14, 55, 32 }, { 9, 2, 2019, 20, 33, 6 });
	ASSERT_EQUAL(test.add_difference(2, test.get_difference()), DateWithTime({ 6, 8, 2020, 14, 55, 32 }));
	test.set_date_with_time(DateWithTime({ 19, 6, 1950, 19, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 05, 03, 2012, 21, 0, 0 }), 2);
	ASSERT_EQUAL(test.add_difference(1, test.get_difference()), DateWithTime({ 05, 03, 2012, 21, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 2);
	ASSERT_EQUAL(test.add_difference(1, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 0 }));
	ASSERT_EQUAL(test.add_difference(2, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 1 }), 2);
	ASSERT_EQUAL(test.add_difference(1, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 1 }));
	ASSERT_EQUAL(test.add_difference(2, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 2 }));

}

void TestDateWithTimeMinusDifference() {
	TimeManagment test({ 6, 8, 2020, 14, 55, 32 }, { 9, 2, 2019, 20, 33, 6 });
	ASSERT_EQUAL(test.substract_difference(1, test.get_difference()), DateWithTime({ 9, 2, 2019, 20, 33, 6 }));
	test.set_date_with_time(DateWithTime({ 19, 6, 1950, 19, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 05, 03, 2012, 21, 0, 0 }), 2);
	ASSERT_EQUAL(test.substract_difference(2, test.get_difference()), DateWithTime({ 19, 6, 1950, 19, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 2);
	ASSERT_EQUAL(test.substract_difference(1, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 0 }));
	ASSERT_EQUAL(test.substract_difference(2, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 0 }));
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 1 }), 2);
	ASSERT_EQUAL(test.substract_difference(1, test.get_difference()), DateWithTime({ 01, 01, 2001, 20, 59, 59 }));
	ASSERT_EQUAL(test.substract_difference(2, test.get_difference()), DateWithTime({ 01, 01, 2001, 21, 0, 0 }));
}

void TestWeekDay() {
	TimeManagment test({ 6, 8, 2020, 14, 55, 32 }, { 9, 2, 2019, 20, 33, 6 });
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(1), 5); //Thursday
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(2), 0); //Saturday
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 21, 6, 1950, 19, 0, 0 }), 2);
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(1), 2); //Monday
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(2), 4); //Wednesday
	test.set_date_with_time(DateWithTime({ 24, 02, 2015, 0, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 17, 04, 2020, 0, 0, 0 }), 2);
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(1), 3); //Tuesday
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(2), 6); //Friday
	test.set_date_with_time(DateWithTime({ 31, 05, 2020, 0, 0, 0 }), 1);
	ASSERT_EQUAL(test.get_weekday_of_date_with_time(1), 1); //Sunday
}

void TestWeekInMonth() {
	TimeManagment test({ 6, 8, 2020, 14, 55, 32 }, { 9, 2, 2019, 20, 33, 6 });
	ASSERT_EQUAL(test.week_in_month(1), 2);
	ASSERT_EQUAL(test.week_in_month(2), 2);
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 21, 6, 1950, 19, 0, 0 }), 2);
	ASSERT_EQUAL(test.week_in_month(1), 1);
	ASSERT_EQUAL(test.week_in_month(2), 4);
	test.set_date_with_time(DateWithTime({ 24, 02, 2015, 0, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 17, 04, 2020, 0, 0, 0 }), 2);
	ASSERT_EQUAL(test.week_in_month(1), 5);
	ASSERT_EQUAL(test.week_in_month(2), 3);
	test.set_date_with_time(DateWithTime({ 31, 05, 2020, 0, 0, 0 }), 1);
	ASSERT_EQUAL(test.week_in_month(1), 5);
}

void TestWeekInYear() {
	TimeManagment test({ 6, 8, 2020, 14, 55, 32 }, { 9, 2, 2019, 20, 33, 6 });
	ASSERT_EQUAL(test.week_in_year(1), 32);
	ASSERT_EQUAL(test.week_in_year(2), 6);
	test.set_date_with_time(DateWithTime({ 01, 01, 2001, 21, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 21, 6, 1950, 19, 0, 0 }), 2);
	ASSERT_EQUAL(test.week_in_year(1), 1);
	ASSERT_EQUAL(test.week_in_year(2), 26);
	test.set_date_with_time(DateWithTime({ 24, 02, 2015, 0, 0, 0 }), 1);
	test.set_date_with_time(DateWithTime({ 17, 04, 2020, 0, 0, 0 }), 2);
	ASSERT_EQUAL(test.week_in_year(1), 9);
	ASSERT_EQUAL(test.week_in_year(2), 16);
	test.set_date_with_time(DateWithTime({ 31, 05, 2020, 0, 0, 0 }), 1);
	ASSERT_EQUAL(test.week_in_year(1), 22);
}

