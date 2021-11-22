#include <iostream>
#include <time.h>
using namespace std;
#define kPricePerUnit 225  // average price of a pair of shoes
#define kWeeklyWage 600    // current weekly wage - Method 1
#define kSalary 7.0        // hourly salary - Method 2
#define kHoursPerWeek 40    // number of hours worked - Method 2
#define kCommission2  0.10  // commission - Method 2
#define kCommission3 0.2    // commission - Method 3
#define kBonusPerUnit 20    // bonus  - Method 3

int GetInput() {
  int units;
  cout << "Enter number of units sold per week: ";
  if (!(cin >> units)) {
    cout << "Numbers only" << endl;
    return 0;
  } else {
    return units;
  }
}
void CalcMethod1() {
  cout << "Method 1: " << kWeeklyWage << endl;
}

void CalcMethod2(int Sales) {
  double PerHour, TotalPay, Commission;

  PerHour = kSalary * kHoursPerWeek;
  Commission = (Sales * kPricePerUnit) * kCommission2;
  TotalPay = PerHour + Commission;
  cout << "Method 2: " << TotalPay << endl;
}

void CalcMethod3(int Sales) {
 int Extra;
 double TotalPay, Commission;
  Commission = (Sales * kPricePerUnit) * kCommission3;
  Extra = Sales * 20;
  TotalPay = Commission + Extra;

  cout << "Method 3: " << TotalPay << endl;

}

main() {
  int WeeklySales;

  WeeklySales = GetInput();
  if (WeeklySales == 0)
  return 0;
  CalcMethod1;
  CalcMethod2(WeeklySales);
  CalcMethod3(WeeklySales);
}

     

 


