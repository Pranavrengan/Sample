#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
  string year_ago;
  string current_year;
  int result_date, result_month, result_year;
  int total_days, total_days2;
  int leap_year, total_months;
  string str1, str2, str3, str4, str5, str6, str7, str8;
  int _str1, _str2, _str3, _str4, _str5, _str6, _str7, _str8;

  for (int i; i < 100; ++i)
  {
    cout << "Enter your date of birth: ";
    cin >> year_ago;
    if (year_ago.length() < 10)
    {
      cout << "Min 8 characters" << endl;
      continue;
    }
    else
    {
      cout << "Enter current year: ";
      cin >> current_year;
      str1 += year_ago[0];
      str1 += year_ago[1];
      str2 += year_ago[3];
      str2 += year_ago[4];
      str3 += year_ago[6];
      str3 += year_ago[7];
      str3 += year_ago[8];
      str3 += year_ago[9];
      str8 += year_ago[8];
      str8 += year_ago[9];
      str4 += current_year[0];
      str4 += current_year[1];
      str5 += current_year[3];
      str5 += current_year[4];
      str6 += current_year[6];
      str6 += current_year[7];
      str6 += current_year[8];
      str6 += current_year[9];
      str7 += current_year[8];
      str7 += current_year[9];
      _str1 = stoi(str1); 
      _str2 = stoi(str2);
      _str3 = stoi(str3);
      _str4 = stoi(str4);
      _str5 = stoi(str5);
      _str6 = stoi(str6);
      _str7 = stoi(str7);
      _str8 = stoi(str8);
      result_date = _str4 - _str1;
      result_month = _str5 - _str2;
      result_year = _str6 - _str3;
      for (int i = _str8; i <= _str7; i++)
      {
        if (i % 4 == 0)
        {
          leap_year += 1;
        }
      }
      total_months = result_year * 12 + result_month;
      total_days = result_date;
      total_days2 = (result_year * 365) + leap_year + total_days;

      cout << "Exact age is: " << result_year << "Years " << result_month << "Months " << result_date << "Days" << endl;
      cout << "or " << total_months << "months and " << result_date << "days" << endl;
      break;
    }
  }
}