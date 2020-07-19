#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

class IntArray
{
public:
    IntArray(int size);
    ~IntArray();

public:
    int Get(int i);
    void Set(int i, int value);

private:
    void CheckIndex(int i);

private:
    int* m_array;
    int m_size;
};

IntArray::IntArray(int size)
{
    m_array = new int[size];
    m_size = size;

    cout << "コンストラクタが呼ばれました。"
         << "要素数は　" << m_size << " です.\n";
}

IntArray::~IntArray()
{
    delete[] m_array;

    cout << "デストラクタが呼ばれました"
         << "要素数は　" << m_size << "でした。\n";
}

int IntArray::Get(int i)
{
    CheckIndex(i);
    return m_array[i];
}

void IntArray::Set(int i, int value)
{
    CheckIndex(i);
    m_array[i] = value;
}

void IntArray::CheckIndex(int i)
{
    if (0 <= i && i < m_size) {
        // インデックスは正常です。
    } else {
        cout << "インデックスが不正です。\n"
             << "値：" << i << endl;
        std::exit(EXIT_FAILURE);
    }
}


int main()
{
    IntArray test(5);
    test.Set(3, 56);
    cout << test.Get(7) << endl;
    int x = 0;
    return 0;
}
