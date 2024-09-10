#include <iostream>
using namespace std;

bool namnhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int ngaytrongthang(int month, int year) {
    switch (month) {
        case 1: return 31;
        case 2: return namnhuan(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0; 
    }
}

void nextYearDate(int day, int month, int year) {
    int nextYear = year + 1;

    int maxDays = ngaytrongthang(month, nextYear);

    if (day > maxDays) {
        day = maxDays; 
    }

    cout << "Ngày này năm sau là: " << day << "/" << month << "/" << nextYear << endl;
}

int main() {
    int day, month, year;

    cout << "Nhập ngày: ";
    cin >> day;
    cout << "Nhập tháng: ";
    cin >> month;
    cout << "Nhập năm: ";
    cin >> year;

    nextYearDate(day, month, year);

    return 0;
}
