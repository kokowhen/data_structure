// 根据输入的N打印0到N的整数

#include <iostream>
#include <string>
using namespace std;

// 方法1：使用循环
void print1N(int N)
{
    for (int i = 0; i <= N; i++)
    {
        cout << i << endl;
    }
}

// 方法2：递归
void print2N(int N)
{
    // cout << endl;
    if (N + 1)
    {
        // cout << N << "\t";
        print2N(N - 1);
        cout << N << endl;
        // 为什么输出的数字是从0到N的顺序？因为调用函数的时候，这里的局部变量（函数里定义的变量）是存放在栈区的，栈区的数据是后进先出的，所以函数调用完后依次取出数据往下执行
        // cout << "*";
    }
}

int main()
{
    int N;
    cout << "please input N" << endl;
    cin >> N;
    print1N(N);
    cout << endl;
    print2N(N);

    system("pause");
    return 0;
}
