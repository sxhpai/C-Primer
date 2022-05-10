#include <iostream>
#include <vector>

/* P70 - P98 */

// int main() {
//     // int a;
//     // cin >> a;
//     // cout << a << endl;

//     // string s;
//     // cin >> s;
//     // cout << s << endl;

//     // string line;
//     // while (cin >> word) {
//     //     cout << word << endl;
//     // }
//     // while (getline(cin, line)) {
//     //     if (line.size() > 80) {
//     //         cout << line << endl;
//     //     }
//     // }

//     // string s1 = "sun";
//     // string s2 = " xinghui";
//     // string s3 = s1 + s2;
//     // cout << s3 << endl;

//     //3.2

//     // string s1;
//     // while (cin >> s1) {
//     //     cout << s1 << endl; 
//     // }
    
//     // while (getline(cin, s1)) {
//     //     cout << s1 << endl; 
//     // }

//     //3.4

//     // string s1,s2;

//     // cin >> s1;
//     // cin >> s2;

//     // if (s1 > s2){
//     //     cout << s1 << endl;
//     // } else {
//     //     cout << s2 << endl;
//     // }

//     //3.5
    
//     // string s;
//     // string sum;
//     // while (cin >> s) {
//     //     sum = sum + s + " ";
//     // }
//     // cout << sum << endl;

//     // string str("some string");
//     // //?????? str ?��???????
//     // for (auto c : str) {
//     //     cout << c << endl;a
//     // }

//     // string s("Hello World!!!");
//     // // punct_cnt???????s.size()??????????????
//     // decltype(s.size()) punct_cnt = 0;
//     // // ???s?��??????????
//     // for (auto c : s) {      //??s?��???????
//     //     if (ispunct(c)) {   //???????????????
//     //          ++punct_cnt;   //??????????????? 1
//     //     }
//     // }
//     // cout << punct_cnt
//     //      << " puncuation characters in " << s << endl;

//     // string s("Hello World!!!");
//     // //??????��???
//     // for (auto &c : s)   // ????s?��????????????c???????
//     //     c = toupper(c); // c?????????????????��??? s ????????
//     // cout << s <<endl;

//     // string s("some string");
//     // if (!s.empty()) {           //???s[0]??��?????????
//     //     s[0] = toupper(s[0]);   //? s ?????????????????
//     //     s[5] = toupper(s[5]);
//     // }
//     // cout << s << endl;

//     // for (decltype(s.size()) index = 0; index != s.size(); ++index) {
//     //     if (!isspace(s[index])) {
//     //         s[index] = toupper(s[index]);   //?????????��???
//     //     }
//     // } 
//     // cout << s << endl;

//     // const string hexdigits = "0123456789ABCDEF";    //????????????????
//     // cout << "Enter a series of numbers between 0 and 15"
//     //      << " separated by spaces. Hit ENTER when finished: "
//     //      << endl;
//     // string result;          // ????????????????????
//     // string::size_type n;    // ?????????????????????
//     // while (cin >> n) {
//     //     cout << n << endl;
//     //     if (n < hexdigits.size()) {// ??????��????
//     //         result += hexdigits[n]; // ???????????????????
//     //     }  
//     // }
//     // cout << "Your hex number is: " << result << endl;

//     //3.6

//     // string s("sunxinghui!");
//     // cout << s << endl;
//     // for (auto &c : s) {
//     //     c = 'X';
//     // }
//     // cout << s << endl;

//     //3.7
//     // string s("sunxinghui!!!");
//     // cout << s << endl;
//     // for (char &c : s) {
//     //     c = 'X';
//     // }
//     // cout << s << endl;

//     //3.8
//     // string s("sunxinghui!!!");
//     // cout << s << endl;
//     // decltype(s.size()) num = 0;
//     // while (num < s.size()) {
//     //     s[num] = 'X';
//     //     num++;
//     // }
//     // cout << s << endl;
//     // for (num = 0; num < s.size(); num++) {
//     //     s[num] = 'x';
//     // }
//     // cout << s << endl;

//     //3.9
//     //?????
//     // string s;
//     // cout << s[0] << endl;

//     //3.10
//     // string str;
//     // while (cin >> str) {
//     //     cout << str << endl;
//     //     for (auto &c : str) {
//     //         if(!ispunct(c)) {
//     //             cout << c;
//     //         }
//     //     }
//     //     cout << endl;
//     // }

//     //3.11
//     // const string s = "Keep out!";
//     // for (auto &c : s) {
//     //     //c?????????? ???????��?????????????????
//     //     // c = 'a';//????????????????
//     // }

//     // vector<int> a(10,1);
//     // cout << a.size() << endl;
//     // decltype(a.size()) b = 1;
//     // cout << b;
    
//     // vector<string> articles = {"a", "an", "the"};
//     // cout << articles[2] << endl;
    
//     // vector<string> v1{10, "hi"};
//     // // for (int i = 0; i < v1.size(); i++) {
//     // //     cout << v1[i] << endl;
//     // // }
//     // for (auto c : v1) {
//     //     cout << c << endl;
//     // }

//     // vector<int> v2; // ?? vector ????
//     // for (int i = 0; i != 100; ++i) {
//     //     v2.push_back(77);
//     // }
//     // for (auto c : v2) {
//     //     cout << c << endl;
//     // }

//     //?????????��?????????????? vector ????????��
//     // string word;
//     // vector<string> text;        // ?? vector ????
//     // while (cin >> word) {
//     //     text.push_back(word);   // ?? word ????? text ????
//     // }

//     // for (auto c : text) {
//     //     cout << c << endl;
//     // }

//     //3.14
//     // int word;
//     // vector<int> text;           //?? vector ????
//     // while (cin >> word) {   
//     //     text.push_back(word);   // ?? word ????? text ????
//     // }

//     // for (auto c : text) {
//     //     cout << c << endl;
//     // }

//     //3.15
//     // string word;
//     // vector<string> text;           //?? vector ????
//     // while (cin >> word) {   
//     //     text.push_back(word);   // ?? word ????? text ????
//     // }

//     // for (auto c : text) {
//     //     cout << c << endl;
//     // }

//     //???? vector ???
//     // vector<int> v{1,2,3,4,5,6,7,8,9};
//     // for (auto &i : v) {
//     //     i *= i;
//     // }
//     // for (auto i : v) {
//     //     cout << i << " ";
//     // }
//     // cout << endl;
    
//     // ?? 10 ?????????????????????????
//     // vector<unsigned> scores(11, 0); // 11???????��??????????0
//     // unsigned grade;
//     // while (cin >> grade) {          // ??????
//     //     if (grade <= 100) {          // ???????��????
//     //         ++scores[grade/10];     // ??????????��??????? 1
//     //     }
//     // }
//     // for (auto c : scores) {
//     //     cout << c << endl;
//     // }

//     // 3.16

//     // vector<int> v1;
//     // vector<int> v2(10);
//     // vector<int> v3(10, 42);
//     // vector<int> v4{10};
//     // vector<int> v5{10, 42};
//     // vector<int> v6{10};
//     // vector<string> v7{10, "hi"};

//     // for (auto c : v6) {
//     //     cout << c << endl;
//     // }

//     // 3.17

//     // vector<string> text;
//     // string word;
//     // while (cin >> word) {
//     //     text.push_back(word);
//     // }

//     // for (auto &c : text) {
//     //     for (auto &s : c) {
//     //         s = toupper(s);
//     //     }
//     // }

//     // for (auto c : text) {
//     //     cout << c << endl;
//     // }

//     // 3.18

//     //?????

//     // 3.19

//     // vector<int> v1(10,42);
//     // vector<int> v2{42,42,42,42,42,42,42,42,42,42,42};

//     // 3.20

//     // int num;
//     // vector<int> word;

//     // while (cin >> num) {
//     //     word.push_back(num);
//     // } 

//     // for (int i = 1; i < word.size(); i += 2) {
//     //     cout << word[i-1] * word[i] << endl;
//     //     if (i + 1 == word.size() - 1) {
//     //         cout << word[i + 1] << endl;
//     //     }
//     // }

//     // for (int i = 0, j = word.size() - 1; i <= j; i++,j--) {
//     //     cout << word[i] * word[j] << endl;
//     // }

//     // 

//     // string s("some string");
    
//     // if (s.begin() != s.end()) {
//     //     auto it = s.begin();
//     //     *it = toupper(*it);
//     // }
//     // cout << s << endl;

//     // for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
//     //     *it = toupper(*it);
//     // }
//     // cout << s << endl;

//     return 0;
// }