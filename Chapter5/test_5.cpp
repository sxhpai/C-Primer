#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

// 5.2

// int main() {
//     vector<int> v{1,2,3,4,5};

//     auto beg = v.begin();
//     while (beg != v.end() && *beg >= 0) {
//         cout << *beg << endl;
//         ++beg;
//     }
//     cout << "sunxinghui" << endl;
//     return 0;
// }

// 5.3

// int main() {

//     const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

//     unsigned int grade = 100;

//     string lettergrade = "";
//     // if (grade < 60) {
//     //     lettergrade = scores[0];
//     // } else {
//     //     lettergrade = scores[(grade - 50) / 10];
//     //     if (grade % 10 > 7) {
//     //         lettergrade += '+';
//     //     } else if (grade % 10 < 3) {
//     //         lettergrade += '-';
//     //     }
//     // }

//     grade < 60 ? lettergrade = scores[0] : lettergrade = scores[(grade - 50) / 10];

//     cout << lettergrade << endl;

//     return 0;
// }

// 5.7

// int main() {
//     int ival1 = 2;
//     int ival2 = 2;

//     if (ival1 != ival2) {
//         ival1 = ival2;
//     } else {
//         ival1 = ival2 = 0;
//     }

//     cout << "ival1 = " << ival1 << endl;
//     cout << "ival2 = " << ival2 << endl;

//     return 0;
// }

// 5.3.2

// unsigned aCnt = 0;
// double a = 0;

// int main() {

//     cout << sizeof(aCnt) << endl;
//     cout << sizeof(a) << endl;

//     return 0;
// }

// int main() {
//     unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//     char ch;
//     while (cin >> ch) {
        
//         switch (ch) {
//             case 'a':
//                 ++aCnt;
//                 break;
//             case 'e':
//                 ++eCnt;
//                 break;
//             case 'i':
//                 ++iCnt;
//                 break;
//             case 'o':
//                 ++oCnt;
//                 break;
//             case 'u':
//                 ++uCnt;
//                 break;
//         }
//     }

//     cout << aCnt << endl;
//     cout << eCnt << endl;
//     cout << iCnt << endl;
//     cout << oCnt << endl;
//     cout << uCnt << endl;

//     return 0;
// }

// 5.9

// int main() {

//     unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
//     unsigned kCnt = 0, zCnt = 0, hCnt = 0;
//     char s;

//     while (cin.get(s)) {
//         // if (s == 'a' || s == 'A') {
//         //     ++aCnt;
//         // } else if (s == 'e' || s == 'E') {
//         //     ++eCnt;
//         // } else if (s == 'i' || s == 'I') {
//         //     ++iCnt;
//         // } else if (s == 'o' || s == 'O') {
//         //     ++oCnt;
//         // } else if (s == 'u' || s == 'U') {
//         //     ++uCnt;
//         // } else {
//         //     ;
//         // }

//         switch (s) {
//             case 'a': case 'A':
//                 ++aCnt;
//                 break;
//             case 'e': case 'E':
//                 ++eCnt;
//                 break;
//             case 'o': case 'O':
//                 ++oCnt;
//                 break;
//             case 'u': case 'U':
//                 ++uCnt;
//                 break;
//             case 'i': case 'I':
//                 ++iCnt;
//                 break;
//             case ' ':
//                 ++kCnt;
//                 break;
//             case '\t':
//                 ++zCnt;
//                 break;
//             case '\n':
//                 ++hCnt;
//                 break;
//             default:
//                 break;
//         }
//     }

//     cout << aCnt << endl;
//     cout << eCnt << endl;
//     cout << iCnt << endl;
//     cout << oCnt << endl;
//     cout << uCnt << endl;
//     cout << kCnt << endl;
//     cout << zCnt << endl;
//     cout << hCnt << endl;

//     return 0;
// }


// ÊäÈëÁ÷²âÊÔ

// int main() {
//     // string str;

//     // cout << "cinµÄ»º³åÇø²âÊÔ:" << endl;
//     // cin >> str;
//     // cout << str << endl;
//     // cin >> str;
//     // cout << str << endl;

//     // string str;
// 	// cout<<"cinµÄ»º³åÇø²âÊÔ£º"<<endl;
// 	// cin>>str;
// 	// cin.sync();
// 	// cout<<str<<endl;
// 	// cin>>str;
// 	// cout<<str<<endl;

//     // string a;
//     // a = cin.get();
//     // cout << a << endl;
//     // cin.sync();
//     // a = cin.get();
//     // cout << a << endl;
//     // a = cin.get();
//     // cout << a << endl;
    
//     return 0;
// }

// void inputest_1() {
//     char ch[3];
//     cin.get(ch,3);
//     cout << ch << endl;
// }

// int main() {
//     string str;
//     unsigned ffCnt = 0, fiCnt = 0, flCnt = 0;    
    
//     while (cin >> str) {

//         if (str == "ff") {
//             ++ffCnt;
//         } else if (str == "fi") {
//             ++fiCnt;
//         } else if (str == "fl") {
//             ++flCnt;
//         }

//     }

//     cout << ffCnt << endl;
//     cout << fiCnt << endl;
//     cout << flCnt << endl;

//     return 0;
// }


// 5.14

// int main() {

//     // int flag = 0;

//     // vector<int> Cnt(10,0);
//     // vector<string> Str(10," ");

//     // string str;

//     // while (cin >> str) {
//     //     int i = 0;
//     //     for (auto c : Str) {
//     //         if (c == str) {
//     //             ++Cnt[i];
//     //         }
//     //         i++;
//     //     }
//     // }
    
//     // for (auto c : Str) {
//     //     cout << c << endl;
//     // }

//     vector<int> Cnt(10,1);
//     vector<string> Str(10," ");
    
//     string str;
//     string Oldstr;

//     cin >> str;
//     Oldstr = str;

//     int add = 0;
    
//     while (cin >> str) {
//         if (str == Oldstr) {
//             Str[add] = str;
//             ++Cnt[add];
//         } else {
//             Str[++add] = str;
//         }
//         Oldstr = str;
//     }
//     int max = 1;
//     for (auto c : Cnt) {
//         if (max < c) {
//             max = c;
//         }
//     }
//     int i = 0;
//     for (auto c : Cnt) {
//         if (max == c) {
//             break;
//         }
//         ++i;
//     }

//     cout << Str[i] << " : " << Cnt[i] << endl;
    
//     return 0;
// }

// 5.17

// int main() {

//     vector<int> a = {1};
//     vector<int> b = {0,1,2,3,4,5,6,7,8,9};
//     int Cnt0 = 0, Cnt1 = 0;
//     auto ia = a.begin();
//     auto ib = b.begin();
//     for ( ; ia != a.end(); ++ia,++ib){
//         if (*ia == *ib) {
//             ++Cnt1;
//         }
//         ++Cnt0;
//     }

//     if (Cnt0 == Cnt1) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }

// 5.19

// int main() {
//     string s1;
//     string s2;
//     do {
//         cin >> s1;
//         cin >> s2;
//         if (s1.size() < s2.size()) {
//             cout << s1 << endl;
//         } else {
//             cout << s2 << endl;
//         }

//     } while(1);
//     return 0;
// }

// 5.20

// int main() {
//     int flag = 0;
//     string str;
//     cin >> str;
//     string oldstr = str;

//     while (cin >> str) {
//         if (oldstr == str) {
//             flag = 1;
//             break;
//         }
//         oldstr = str;
//     }

//     if (flag != 0) {
//         cout << oldstr << endl;
//     } else {
//         cout << "No" << endl;
//     }

//     return 0;
// }

// int main() {
//     int i = 2;
    
//     if (i == 0) {
//         cout << " OK " << endl;
//     } else {
//         throw runtime_error("Error!");
//     }
//     return 0;
// }

// 5.6.3

int main() {
    int val1 = 0, val2 = 0;
    while (cin >> val1 >> val2) {
        try {
            if (val2 == 0) {
                throw runtime_error(" O Error!!!");
            }
            cout << val1 / val2 << endl;
        } catch (runtime_error err) {
            cout << err.what() << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') {
                break;
            }
        }
    }


    return 0;
}