#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

void test01() {

    auto add = [](int a, int b) -> int {
        return a + b;
        };

    int result = add(2, 3); // result is 5
    cout << result << endl; // output: 5
}
void test02() {

    // ͨ�����ò��������
    int y = 20;
    auto increment_y = [&y]() {
        y++;
        };
    increment_y();
    // y is now 21
    cout << y << endl; // output: 21

}
void test03() {
    // ���������ⲿ������
    int a = 1, b = 2, c = 3;
    auto sum = [=]() {
        return a + b + c;
        };

    int result = sum(); // result is 6

    cout << result << endl; // output: 6
}
void test04() {
    cout<<"��׼���㷨"<<endl;
    vector<int> vec = { 1, 2, 3, 4, 5 };
    for_each(vec.begin(), vec.end(), [](int& n) { n *= 2; });
    for_each(vec.begin(), vec.end(), [](int& n) { cout << n << " "; });
    cout << endl; // output: 2 4 6 8 10

}
void test05() {
    cout<<"�Զ�������"<<endl;

    std::vector<int> numbers = {4, 2, 5, 1, 3};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });

    std::vector<int> numbers2 = {4, 2, 5, 1, 2, 3};
    std::sort(numbers2.begin(), numbers2.end());

    for_each(numbers.begin(), numbers.end(), [](int& n) { cout << n << " "; });
    cout << endl; 
    for_each(numbers2.begin(), numbers2.end(), [](int& n) { cout << n << " "; });
    cout << endl; 
}

int main() {
    test01();
    test02();
    test03();    
    cout<<"Lambda ���ʽ��ʹ�ó���"<<endl;
    test04();
    test05();
    system("pause");
    return 0;
}