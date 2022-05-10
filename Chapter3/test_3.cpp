#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

// P99 3.21
// int main() {
   
//    vector<int> v1;
//    vector<int> v2(10);
//    vector<int> v3(10, 42);
//    vector<int> v4{10};
//    vector<int> v5{10, 42};
//    vector<string> v6{10};
//    vector<string> v7{10, "hi"};

//    // cout << v1.size() << endl;
//    // for (auto i = v1.begin(); i != v1.end(); ++i) {
//    //    cout << *i << endl;
//    // }

//    // cout << "v2 = " << v2.size() << endl;
//    // for (auto i = v2.begin(); i != v2.end(); ++i) {
//    //    cout << *i << endl;
//    // }

//    // cout << "v3 = " << v3.size() << endl;
//    // for (auto i = v3.begin(); i != v3.end(); ++i) {
//    //    cout << *i << endl;
//    // }

//    // cout << "v4 = " << v4.size() << endl;
//    // for (auto i = v4.begin(); i != v4.end(); ++i) {
//    //    cout << *i << endl;
//    // }

//    // cout << "v5 = " << v5.size() << endl;
//    // for (auto i = v5.begin(); i != v5.end(); ++i) {
//    //    cout << *i << endl;
//    // }

//    // cout << "v6 = " << v6.size() << endl;
//    // for (auto i = v6.begin(); i != v6.end(); ++i) {
//    //    cout << "-" << *i << "-" << endl;
//    // }

//    // cout << "v7 = " << v7.size() << endl;
//    // for (auto i = v7.begin(); i != v7.end(); ++i) {
//    //    cout << *i << endl;
//    // }

//    return 0; 
// }

// P99 3.22

// int main() {
//    vector<string> text{"sun", "xing", "hui"};
//    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//       for (auto &iit : *it) {
//          iit = toupper(iit);
//       }
//    }
//    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
//       cout << *it << endl;
//    }
//    return 0;
// }

// P99 3.23

// int main() {
//    vector<int> num(10 ,2);
//    for (auto it = num.begin(); it != num.end(); ++it) {
//       *it = (*it) * 2;
//    }
//    for (auto iit : num) {
//       cout << iit << endl;
//    }
//    return 0;
// }

// 使用迭代器的二分搜索

// auto find(vector<int> &text, int val) {
//    auto beg = text.begin();
//    auto end = text.end();
//    auto mid = beg + (end - beg) / 2;
//    while (beg != end) {
//       mid = beg + (end - beg) / 2;
//       if (val < *mid) {
//          end = mid;
//       } else if (val > *mid) {
//          beg = mid + 1;
//       } else {
//          return mid;
//       }
//    }
//    return beg;
// }

// int main() {
//    vector<int> text = {1,2,3,4,5,6,7,8,9 };
//    auto n = find(text, 1);
//    cout << *n << endl;
//    return 0;
// }

// 3.24

// int main() {
//    int word;
//    vector<int> num;
//    while (cin >> word) {
//       num.push_back(word);
//    }
//    cout << "len = " << num.size() << endl;
//    // for (auto c : num) {
//    //    cout << c << endl;
//    // }
//    cout << "------------" << endl;
//    auto i = num.begin();
//    auto j = num.end() - 1;
//    while (i <= j) {
//       cout << (*i) * (*j) << endl;
//       i++;
//       j--;
//    }

//    return 0;
// }

// 3.25

// int main() {
//    vector<unsigned> scores(11, 0);  // 11个分数段，全都初始化为0
//    unsigned grade;
//    auto beg = scores.begin();
//    while (cin >> grade) {
//       if (grade <= 100) 
//          ++( *(beg + grade / 10) );
//    }

//    for (auto c : scores) {
//       cout << c << " ";
//    }
//    return 0;
// }

// 3.26

// 防止溢出

// 3.27 

// 3.28

// 3.29


// int main() {
//    unsigned scores[11] = {};
//    unsigned grades;
//    while (cin >> grades) {
//       if (grades <= 100) {
//          ++scores[grades / 10];  //将当前分数段的计数值加 1
//       }
//    }

//    for (auto i : scores) {
//       cout << i << " ";
//    }
//    cout << endl;

//    return 0;
// }

// 3.30

// int main() {
//    constexpr size_t array_size = 10;
//    int ia[array_size];
//    for (size_t ix = 0; ix < array_size; ++ix) {
//       ia[ix] = ix;
//    }

//    for (auto c : ia) {
//       cout << c << endl;
//    }

//    return 0;
// }

// 3.31

// int main() {
//    int arr[10];
//    for (size_t i = 0; i < 10; i++) {
//       arr[i] = i;
//    }

//    int arr1[10];
//    for (size_t i = 0; i < 10; i++) {
//       arr1[i] = arr[i];
//    }

//    for (auto c : arr) {
//       cout << c << endl;
//    }

//    return 0;
// }

// 3.32

// int main() {
//     vector<int> a(10);
//     int j = 0;
//     for (auto &c : a) {
//         c = j;
//         j++;
//     }
//     for (auto c : a) {
//         cout << c << endl;
//     }
//     vector<int> b;
//     for (auto c : a) {
//         b.push_back(c);
//     }
//     cout << "------------" << endl;
//     for (auto c : b) {
//         cout << c << endl;
//     }
//     return 0;
// }

// int main() {
//     int arr[] = {0,1,2,3,4,5,6,7,8,9,11,-2};
//     int *pbeg = begin(arr), *pend = end(arr);
//     while (pbeg != pend && *pbeg >= 0) {
//         ++pbeg;
//     }
//     cout << *pbeg << endl;
//     return 0;
// }

// 3.34
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int *p2 = arr;
//     int *p1 = &arr[4];

//     p1 += p2 - p1;
//     for (auto c : arr) {
//         cout << c << endl;
//     }
//     for (int i = 0; i < 5; i++) {
//         p2[i] = 0; 
//     }
//     for (auto c : arr) {
//         cout << c << endl;
//     }
//     // cout << *p1 << endl;

//     return 0;
// }

// 3.25

// int main() {
//     // 判断两个数组是否相等
//     // int arr1[] = {1,2,3,4,5,7};
//     // int arr2[] = {1,2,3,4,5,7};

//     // auto length1 = sizeof(arr1) / sizeof(arr1[0]);
//     // auto length2 = sizeof(arr2) / sizeof(arr2[0]);
    
//     // int k = 0;
//     // if (length1 != length2) {
//     //     cout << "!=" << endl;
//     //     return 0;
//     // } else {
//     //     for ( int i = 0; i < length1; i++) {
//     //         if (arr1[i] == arr2[i]) {
//     //             k++;
//     //         }
//     //     }
//     //     if( k == length1) {
//     //         cout << "==" << endl;
//     //         return 0;
//     //     } else {
//     //         cout << "!=" << endl;
//     //         return 0;
//     //     }
//     // }

//     // 比较两个 vector 对象是否相等
//     // vector<int> a = {1,2,2};
//     // vector<int> b = {1,3,2};

//     // auto la = a.size();
//     // auto lb = b.size();
//     // int k = 0;
//     // if (la != lb) {
//     //     cout << "!=" << endl;
//     //     return 0;
//     // } else {
//     //     auto pb = b.begin();
//     //     for (auto pa = a.begin(); pa < a.end(); ++pa) {
//     //         if (*pa == *pb) {
//     //             k++;
//     //         }
//     //         ++pb;
//     //     }
//     //     if (k == la) {
//     //         cout << "==" << endl;
//     //         return 0;
//     //     } else {
//     //         cout << "!=" << endl;
//     //         return 0;
//     //     }
//     // }
// }

// 3.37

// int main() {
//     const char ca[] = {'h','e','l','l','o','\0'};
//     const char *cp = ca;
//     while (*cp) {
//         cout << *cp << endl;
//         ++cp;
//     }
// }

// 3.39

// int main() {
//     // 比较两个字符串大小，C++
//     // string s1 = "abcd";
//     // string s2 = "abcd";
//     // if (s1 < s2) {
//     //     cout << "s1 < s2" << endl;
//     // } else if (s1 > s2) {
//     //     cout << "s1 > s2" << endl;
//     // } else {
//     //     cout << "s1 == s2" << endl;
//     // }

//     // 比较两个字符串大小，C 语言风格
//     // const char a[] = "at";
//     // const char b[] = "at";
//     // auto res = strcmp(a, b);
//     // if (res == 0) {
//     //     cout << "a == b" << endl;
//     // } else if ( res > 0) {
//     //     cout << "a > b" << endl;
//     // } else {
//     //     cout << "a < b" << endl;
//     // }    
//     return 0;
// }

// 3.40

// int main() {
//     char a[] = "sun";
//     char b[] = "xinghui";

//     char c[] = "          ";

//     strcpy(c, a);
//     strcat(c, b);

//     cout << c << endl;
// }

// 3.41
// 3.42

// int main() {
//     int arr[] = {1,2,3,4,5};
//     vector<int> v(begin(arr), arr + 5);
//     vector<int> v2;
//     for (auto c : arr) {
//         v2.push_back(c);
//     }
//     for (auto c : v2) {
//         cout <<c << endl;
//     }

//     return 0;
// }

// int main() {
//     // int arr[5] = {1,2};
    
//     // for (auto c : arr) {
//     //     cout << c << endl;
//     // }

//     // int ia[3][4] = {
//     //     {0,1,2,3},
//     //     {4,5,6,7},
//     //     {8,9,10,11}
//     // };

//     // int (&row)[4] = ia[1];

//     // for (auto &c : row) {
//     //     c = 0;
//     // }

//     // int a = 3;
//     // int &b = a;
//     // int &c = b;
//     // c = 0;
//     // cout << a << endl;
//     // cout << b << endl;

//     constexpr size_t rowCnt = 3, colCnt = 4;
//     int ia[rowCnt][colCnt]; // 12 个未初始化的元素

//     // for (size_t i = 0; i != rowCnt; ++i) {
//     //     for (size_t j = 0; j != colCnt; ++j) {
//     //         // 将元素的位置索引作为它的值
//     //         ia[i][j] = i;
//     //     }
//     // }

//     // for (size_t i = 0; i != rowCnt; ++i) {
//     //     for (size_t j = 0; j != colCnt; ++j) {
//     //         cout << ia[i][j] << endl;
//     //     }
//     // }

//     // // 范围 for 循环

//     // int cnt = 0;
//     // for (auto &row : ia) {
//     //     for (auto &col : row) {
//     //         col = cnt;
//     //         cnt++;
//     //     }
//     // }
//     // for (auto &row : ia) {
//     //     for (auto col : row) {
//     //         cout << col << endl;
//     //     }
//     // }

//     // // 利用指针输出每一个元素
//     // for (auto p = ia; p != ia + 3; ++p) {
//     //     // q指向 4 个整数数组的首元素，也就是说，q 指向一个整数
//     //     for (auto q = *p; q != *p + 4; ++q) {
//     //         cout << *q << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // using int_array = int[4];   // 新标准下类型别名的声明
//     // typedef int int_array[4];   // 等价的 typedef 声明

//     // // 输出 ia 中每个元素的值，每个内层数组各占一行

//     // for (int_array *p = ia; p != ia + 3; ++p) {
//     //     for (int *q = *p; q != *p + 4; ++q) {
//     //         cout << *q << " ";
//     //     }
//     //     cout << endl;
//     // }
    
//     return 0;
// }

// 3.43 

 int main() {

     constexpr size_t rowCnt = 3, colCnt = 4;
     int ia[rowCnt][colCnt];    // 12 个未初始化的元素

    int cnt = 0;

    // 范围 for 初始化

     for (auto &row : ia) {
         for (auto &col : row) {
             col = cnt;
             cnt++;
         }
     }

    // 范围 for 

    for (auto &row : ia) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    // 普通输出

    for (int i = 0; i < rowCnt; ++i) {
        for (int j = 0; j < colCnt; ++j) {
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

    // 指针

    // using int_array = int[4];
    typedef int int_array [4];

    // 使用普通指针

    for (int (*p)[4] = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }

    // 使用类型别名

    for (int_array *p = ia; p != ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
    
    // 使用 auto 

    for (auto p = ia; p != ia + 3; ++p) {
        for (auto q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }
     return 0;
 }