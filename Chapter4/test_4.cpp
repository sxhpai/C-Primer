#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::cin;

// int main() {

//     int ival = 42;
//     double dval = 3.14;
//     int res = ival % 12;
//     cout << res << endl;
//     cout << "sun" << endl;

//     // 4.4
//     cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;

//     // 4.5
//     cout << -30 * 3 + 21 / 5 << endl;
//     cout << -30 + 3 * 21 / 5 << endl;
//     cout << 30 / 3 * 21 % 5 << endl;
//     cout << -30 / 3 * 21 % 4 << endl;

//     return 0;
// }

// 4.10

// int main() {
//     int val = 0;
//     while (cin >> val && val != 42) {
//         cout << val << endl;
//     }
//     return 0;
// }

// 4.11



// 4.12


// 4.13

// int main() {
//     int i; double d;
//     // d = i = 3.5;
//     i = d = 3.5;
//     cout << "d = " << d << endl;
//     cout << "i = " << i << endl;

//     return 0;
// }

// 4.16

// 4.21

// int main() {
//     vector<int> v{1,2,3,4,5,6};

//     for (auto &c : v) {
//         (c%2 == 0) ? c = c : c *= 2;    
//     }

//     for (auto c : v) {
//         cout << c << " ";
//     }

//     return 0;
// }

// 4.22

// int main() {
//     int grade = 90;

//     if (grade < 60) {
//         cout << "fail" << endl;
//     } else if (grade >= 60 && grade < 75) {
//         cout << "low pass" << endl;
//     } else if (grade >= 75 && grade < 90) {
//         cout << "pass" << endl;
//     } else {
//         cout << "high pass" << endl;
//     }

//     return 0;
// }

// int main() {
//     unsigned long quiz1 = 0;

//     // 第27位置 1，其它位保持不变
//     quiz1 |= 1UL << 27;
//     // 第27位置 0，其它位保持不变
//     quiz1 &= ~(1UL << 27);

//     // 检测第 27 位是否为 1 ，为 1 返回 true ， 为 0 返回 false
//     bool status = quiz1 & (1UL << 27);

//     if (status) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;
// }

// int main() {
//     int a = 0, b = 0;

//     // a = b = 2;

//     cout << (b = 2) << endl;
    
//     return 0;
// }

// 4.27

// int main() {
//     unsigned long ul1 = 3, ul2 = 7;

//     cout << (ul1 & ul2) << endl;
//     cout << (ul1 | ul2) << endl;

//     cout << (ul1 && ul2) << endl;
//     cout << (ul1 || ul2) << endl;

//     return 0;
// }

// int main() {
//     string s1("sunsssss");

//     cout << sizeof(string) << endl;
//     cout << sizeof(s1) << endl;
//     cout << s1.size() << endl;
//     cout << s1 << endl;

//     return 0;
// }

// 4.29

// int main() {
//     int x[10];
//     int *p = x;
//     cout << sizeof(x) / sizeof(*x) << endl;
//     cout << sizeof(p) / sizeof(*p) << endl;
//     return 0;
// }

// 4.30


// 4.32

// int main() {
//     constexpr int size = 5;
//     int ia[size]  = {1,2,3,4,5};
//     for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr) {
//         cout << *ptr << endl;
//     }
//     return 0;
// }

// int main() {
//     unsigned short ch = -2;
//     cout  << ch << endl;
//     return 0;
// }