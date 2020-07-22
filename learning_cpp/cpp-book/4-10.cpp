#include <iostream>
//#include <array><cmath><vector><cstudio>
using namespace std;

const char* const MONTH_NAME[] = {
    "一月", "二月", "三月", "四月", "五月", "六月",
    "七月", "八月", "九月", "十月", "十一月", "十二月"};

const char* GetOldMonthName(int month)
{
    if (1 <= month && month <= 12) {
        return MONTH_NAME[month - 1];
    }
    return NULL;
}

int main()
{
    int month;

    cout << "今日は何月ですか？" << endl;
    cin >> month;
    const char* name = GetOldMonthName(month);
    if (name = NULL) {
        cout << "ERROR" << endl;
    } else {
        cout << name << endl;
        return 0;
    }
