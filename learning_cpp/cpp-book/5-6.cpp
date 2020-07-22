#include <iostream>
using namespace std;

enum CompareResult {
    CR_LESS_THAB = 0,
    CR_EQAL_TO = 1,
    CR_GREATER_THAN = 2  //<<コンマをつけない
};

CompareResult Compare(int a, int b)
{
    if (a < b) {
        return CR_LESS_THAB;
    } else if (a > b) {
        return CR_GREATER_THAN;
    } else {
        return CR_EQAL_TO;
    }
}

bool Compare()
{
    int a, b;

    cout << "数字を二つ入力してください > " << flush;
    cin >> a >> b;

    if (a == -1) {
        return false;
    }

    switch (Compare(a, b)) {
    case 0:
        cout << "LESS" << endl;
        break;

    case 1:
        cout << "EQUAL" << endl;
        break;

    case 2:
        cout << "GREATER" << endl;
        break;
    }

    return true;
}

int main()
{
    while (Compare()) {
        // Nothing
    }
}
