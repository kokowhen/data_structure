// 计算多项式

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

// 效率不高的方法
void polynomial1(int c[], int a, int length)
{
    int tem;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        tem = c[i] * pow(a, i);
        sum += tem;
    }
    cout << sum << endl;
}

// 秦久韶算法
void polynomial2(int c[], int a, int length)
{
    int tem;
    int sum = 0;
    for (int i = length; i < 0; i--)
    {
    }
    cout << sum << endl;
}

// 使用递归的方法(复习)
void polynomial3(int c[], int a, int length)
{
    int tem;
    int sum = 0;
    if (length + 1)
    {
        polynomial3(c, a, length - 1);
        tem = c[length] * pow(a, length);
        sum += tem;
        cout << sum << endl;
    }
}

int main()
{
    clock_t start, finish;
    start = clock();
    int c[] = {1, 2, 3, 4, 5};             // 多项式的系数
    int a = 10;                            // 多项式在a=10的点
    int length = sizeof(c) / sizeof(c[0]); // 数组的长度
    // cout << length << endl;
    // polynomial1(c, a, length);
    finish = clock();
    // cout << finish - start << "/" << CLOCKS_PER_SEC << "(s)" << endl;
    // polynomial2(c, a, length);
    polynomial3(c, a, length);

    system("pause");
    return 0;
}
