#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <initializer_list>

using std::initializer_list;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::runtime_error;


// int func(int val1, int val2, double dval) {
//     return val1 + val2;
// }

// string f1() {
//     string s = "sun";
//     return s;
// }

// double square(double x) {
//     return x * x;
// }

// int main() {
//     double res = square(3);
//     cout << res << endl;
//     return 0;
// }

// size_t count_calls() {
//     static size_t ctr = 0;
//     return ++ctr;
// }

// int main() {
//     for (size_t i = 0; i != 10; ++i) {
//         cout << count_calls() << endl;
//     }
//     return 0;
// }

// int jf(int val) {
//     int res = 1;
//     if (val == 0) {
//         res = 1;
//     }
//     while (val >= 1) {
//         res *= val;
//         --val;
//     }
//     return res;
// }

// int jueduizhi(int val) {
//     int res;
//     if ( val > 0) {
//         res = val;
//     } else {
//         res = -val;
//     }
//     return res;
// }

// int main() {
//     // double dres = square(0.8);
//     // int res = func(1,2,0.2);
//     int nres = jf(0);
//     int nres1 = jueduizhi(-10);
//     // string sres = f1();
//     // cout << dres << endl;
//     // cout << res << endl;
//     // cout << sres << endl;
//     cout << nres << endl;
//     cout << nres1 << endl;
//     return 0;
// }

//  6.6

// int func1(int &sum, int a, int b) {
//     sum = a + b;
//     static int count_num;
//     return count_num++;
// }

// int main() {
//     int sum = 0;
//     int num = func1(sum, 1, 2);
//     cout << "count_num = " << num << endl;
//     cout << "sum = " << sum << endl;
//     return 0;
// }

// 6.7

// int func() {
//     static int num = 0;
//     return num++;
// }

// int main() {
//     int i = 5;
//     while (i--) {
//         cout << func() << endl;
//     }
//     return 0;
// }      

// 6.10 

// void swap(int *val1, int *val2) {
//     int val = *val1;
//     *val1 = *val2;
//     *val2 = val;
// }

// int main() {
//     int val1 = 1;
//     int val2 = 2;
//     swap(&val1,&val2);
//     cout << "val1 = " << val1 << endl;
//     cout << "val2 = " << val2 << endl;
//     return 0;
// }

// void reset(int &i) {
//     i = 100;
// }

// int main() {
//     int r = 0;
//     reset(r);
//     cout << r << endl;
//     return 0;
// }

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a = 10;
//     int b = 123;
//     swap(a, b);

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;

//     return 0;
// }

// 6.11

// string::size_type find_char(const string &s, char c, string::size_type &occurs) {
//     auto ret = s.size();        // ��һ�γ��ֵ�λ��
//     occurs = 0;                 // ���ִ�������
//     for (decltype(ret) i = 0; i != s.size(); ++i) {
//         if (s[i] == c) {
//             if (ret == s.size()) {
//                 ret = i+1;
//             }
//             ++occurs;       // �����ֵĴ�����1
//         }
//     }
//     return ret;
// }

// int main() {
//     string s = "sunixinghui";
//     char c = 'i';
//     string::size_type num_c;
//     string::size_type pos_c = find_char(s, c, num_c);

//     cout << pos_c << endl;
//     cout << num_c << endl;
//     return 0;
// }

// 6.12

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int a = 1, b = 2;
//     swap(a, b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;    
//     return 0;
// }

// int main() {
//     int a[] = {1,2,3,4,5};
//     auto b = a;
//     cout << b[2] << endl;
//     return 0;
// }


// // �ж� s ���Ƿ��д�д��ĸ
// bool is_upper(const string &s) {
//     for (string::size_type i = 0; i != s.size(); ++i) {
//         if (s[i] >= 65 && s[i] <= 90) {
//             return true;
//         }
//     }
// }

// // �� s �еĴ�д��ĸ��Ϊ��д
// void up_to_low(string &s) {
//     for (string::size_type i = 0; i != s.size(); ++i) {
//         if (s[i] >=65 && s[i] <= 90) {
//             s[i] = s[i] + 32;
//         }
//     }
// }

// int main() {
//     // is_upper()������֤
//     if (is_upper("sunxingH")) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     // up_to_low()������֤
//     string s = "SUNxingHui";
//     up_to_low(s);
//     cout << s << endl;
//     return 0;
// }

// 6.15

// ���� s �� c ��һ�γ��ֵ�λ������
// �����β� occurs ����ͳ��c���ֵ��ܴ���

// string::size_type find_char(const string &s, char c, string::size_type &occurs) {
//     auto ret = s.size();        // ��һ�γ��ֵ�λ�ã�����еĻ���
//     occurs = 0;
//     for (decltype(ret) i = 0; i != s.size(); ++i) {
//         if (s[i] == c) {
//             if (ret == s.size()) {
//                 ret = i;    
//             }
//             ++occurs;
//         }
//     }
//     return ret;
// }

// int main() {
//     string s = "siunxinghiuix";
//     char c = 'i';
//     string::size_type num;

//     string::size_type size_num = find_char(s, c, num);

//     cout << "size_num = " << size_num << endl;
//     cout << "num = " << num << endl;

//     return 0;
// }

// 6.18

// bool compare(matrix &a, matrix &b); // �������ñȽ��������εĴ�С��
// vector<int>::iterator change_val(int a, vector<int>); // ����Ԫ��a��vector<int> �е�λ��

// double calc(double a) {
//     return a;
// }

// int main() {
//     double c = calc(0.89);
//     cout << c << endl;
//     return 0;
// }

// void print(int (&arr)[10]) {
//     for (auto elem : arr) {
//         cout << elem << endl;
//     }
// }

// int main() {
//     int i = 0, j[2] = {0, 1};
//     int k[10] = {0,1,2,3,4,5,6,7,8,9};
//     // print(&i);      //����ʵ�β��Ǻ���10������������
//     // print(j);       // ����ʵ�β��Ǻ���10������������
//     print(k);       // ��ȷ��ʵ���Ǻ���10������������
//     return 0;
// }

// void print(int (*matrix) [4], int rowSize) {
//     for (int i = 0; i != rowSize; ++i) {
//         for (auto elem : *(matrix + i)) {
//             cout << elem << endl;
//         }
//     }
// }

// int main() {
//     int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{0,0,1,0}};
//     print(matrix,3);
//     return 0;
// }

// int ret_num(int a, int *b) {
//    return a > *b ? a : *b; 
// }

// int main() {
//     int a = 11;
//     int b = 10;
//     cout << ret_num(a, &b) << endl;
//     return 0;
// }

// int swap(int *a, int *b) {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// int main() {
//     int a = 0;
//     int b = 1;
//     swap(&a, &b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     return 0;
// }

// 6.21

// int func_two(int a, int *b) {
//     int c;
//     if (a > *b) {
//         c = a;
//     }else {
//         c = *b;
//     }
//     return c;
// }

// int main() {
//     int a = 7;
//     int b = 2;
//     int c = func_two(a, &b);
//     cout << c << endl;
//     return 0;
// }

// 6.23

// void print(const int *beg, const int *end) {
//     while (beg != end) {
//         cout << *beg++ << endl;
//     }
// }

// int main() {
//     int i = 1;
//     int j[2] = {1,2};
//     // print(j,&j[1] + 1);
//     return 0;
// }

// 6.24

// void print(const int ia[10]) {
//     for (size_t i = 0; i != 10; ++i) {
//         cout << ia[i] << endl;
//     }
// }

// int main() {
//     int a[10] = {1,2,3,4,5,6,7,8};
//     print(a);
//     return 0;
// }

// ���� argc *argv[] �Ĺ���
// �� test_6.exe 

// int main(int argc, char *argv[])
// {
//     for (int i = 0; i != argc; ++i) {
//         cout << argv[i] << endl;
//     }

// 	system("pause");
// }

// 6.25 

// ��������ִ���������
// g++ test6.cpp -o test6
// ./test6 bai du 

// int main(int argc, char *argv[])
// {
    
//     string a = string(argv[1]) + string(argv[2]);
   
//     cout << a << endl;

//     system("pause");
// }

// 6.26

// ��������ִ���������
// g++ test6.cpp -o test6
// ./test6 prog -d -o ofile data0 0

// int main(int argc, char *argv[])
// {
//     for (int i = 1; i != argc; ++i) {
//         cout << argv[i] << endl;
//     }

//     system("pause");
// }

// 6.27 6.28 6.29

// void error_msg(initializer_list<string> il) {
//     for (auto beg = il.begin(); beg != il.end(); ++beg) {
//         cout << *beg << " ";
//     }
//     cout << endl;
// }

// void initializer_list_sum(initializer_list<int> a) {
//     for (auto c : a ){
//         cout << c << endl;
//     }
// }

// int main() {
//     initializer_list_sum({1,2,30});
//     error_msg({"functionX", "okay"});
//     return 0;
// }

// char &get_val(string &str, string::size_type ix) {
//     return str[ix];     // get_val �ٶ�����ֵ����Ч��
// }

// int main() {
//     string s("a value");
//     cout << s << endl;      // ��� a value
//     get_val(s, 0) = 'A';    // �� s[0] ��ֵ��Ϊ A
//     cout << s << endl;      // ��� A value
//     return 0;
// }


// �б��ʼ������ֵ

// vector<string> process(int a) {
//     if ( a > 0) {
//         return {};
//     } else if ( a == 0 ) {
//         return {"sun", "xing"};
//     } else {
//         return {"sun", "xing", "hui"};
//     }
// }

// vector<int> process_0(int a) {
//     if ( a > 0) {
//         return {1};
//     } else if ( a == 0 ) {
//         return {1,2};
//     } else {
//         return {1,2,3};
//     }
// }

// int main() {

//     for ( auto c : process_0(-1)) {
//         cout << c << endl;
//     }
   
//     return 0;
// }

// void swap(int &v1, int &v2) {
//     // �������ֵ�������Ҫ����
//     if (v1 == v2) {
//         return;
//     }

//     int temp = v1;
//     v1 = v2;
//     v2 = v1;

//     // �˴�������ʽ��return���
// }

// 6.30

// bool str_subrange(const string &str1, const string &str2) {
//     if (str1.size() == str2.size()) {
//         return str1 == str2;
//     }

//     auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

//     for (decltype(size) i = 0; i != size; ++i) {
//         if (str1[i] != str2[i]) {
//             return;
//         }
//     }
// }

// int main() {
//     str_subrange("sun", "xing");
//     return 0;
// }

// 6.33

// ����Ϊ��Ŀ��������������Ҫд�ݹ�

// vector<int> fact(vector<int>) {

// }

// int main() {

//     return 0;
// }

// 6.34

// int factorial(int val) {
//     if (val > 1) {
//         return factorial(--val) * val;
//     }
//     return 1;
// }

// int main() {
//     cout << factorial(4) << endl;
//     return 0;
// }

// ʹ���������ͱ���
 
//  typedef int arrT[10];
//  using arrT = int[10];


//  typedef int arrT[10];      // arrT��һ�����ͱ���������ʾ�������Ǻ���10�����������顣
//  using arrT = int[10];      // arrT �ȼ�������
//  arrT* func(int i);         // func ����һ��ָ���� 10 �������������ָ��

// // func ����һ�� int ���͵�ʵ�Σ�����һ��ָ�룬��ָ��ָ����10������������
// auto func(int i) -> int(*)[10];

// int odd[] = {1,3,5,7,9};
// int even[] = {0,2,4,6,8};
// // ����һ��ָ�룬��ָ������5������������
// decltype(odd) *arrPtr(int i) {
//     return (i % 2) ? &odd : &even;  // ����һ��ָ�������ָ��
// }

// 6.36

// typedef string arrS[10];

// arrS sun = {"1","2","3","4","5","6","7","8","9","10"};

// arrS &func(arrS & s) {
//     // sun[1] = "A";
//     return s;
// }

// // auto func(arrS &s) -> string(*)[10];
// // decltype(sun) *arrPtr(arrS &s);

// int main() {
//     func(sun)[0] = "A";
//     for (auto c : sun) {
//         cout << c << endl;
//     }
//     return 0;
// }

// 6.37

// ��һ��������ֱ������
// string sun[10] = {"1","2","3","4","5","6","7","8","9","10"};

// string (*func(string (*sunPtr)[10]))[10] {
//     (*sunPtr)[1] = "A";
//     return sunPtr;
// }

// int main() {
//     for (auto a : sun) {
//         cout << a << endl;
//     }

//     for (auto a : (*func(&sun))) {
//         cout << a << endl;
//     }

//     return 0;
// }

// �ڶ���������typedef ��������
// typedef string arrs [10];       // arrs ��һ������ı�������������к���10��string����
// arrs* func1(arrs* sPtr) {
//     (*sPtr)[0] = "s";
//     return sPtr;
// }

// int main() {
//     arrs sun = {"1","2","3","4","5","6","7","8","9","10"};

//     cout << (*func1(&sun))[9] << endl;

//     for (auto a : (*func1(&sun))) {
//         cout << a << endl;
//     }
//     return 0;
// }

// ������������β�÷�������
// auto func1(string (*sun)[10]) -> string (*) [10] {
//     (*sun)[0] = "sun";
//     return sun;
// }

// int main() {
//     string sun[10] = {"1","2","3","4","5","6","7","8","9","10"};

//     for (auto a : (*func1(&sun))) {
//         cout << a << endl;
//     }

//     return 0;
// }

// 6.38

// int odd[] = {1,3,5,7,9};
// int even[] = {0,2,4,6,8};
// // ����һ��ָ�룬��ָ��ָ���� 5 ������������
// decltype(odd) * arrPtr(int i) {
//     return (i % 2) ? &odd : &even;      // ����һ��ָ�������ָ��
// }
// // ����һ�����ã������ö����� odd ���� even
// decltype(odd) & arrPtr_(int i) {
//     return (i % 2) ? odd : even;
// }

// int main() {
//     // ָ��
//     for (auto a : *arrPtr(1)) {
//         cout << a << endl;
//     }

//     cout << "--------------" << endl;

//     // ����
//     for (auto a : arrPtr_(2)) {
//         cout << a << endl;
//     }

//     return 0;
// }

// // const_cast �� ����

// const string & shorterString(const string &s1, const string &s2) {
//     return s1.size() <= s2.size() ? s1 : s2;
// }

// string & shorterString(string &s1, string &s2) {
//     auto &r = shorterString(const_cast<const string&>(s1),const_cast<const string&>(s2));
//     return const_cast<string&>(r);
// }

// 6.42

// // ��� ctr ��ֵ����1������ word �ĸ�����ʽ
// string make_plural(size_t ctr, const string &word, const string &ending = "s") {
//     return (ctr > 1) ? word + ending : word;
// }

// int main() {
//     string str_1 = make_plural(2, "success", "es");
//     string str_2 = make_plural(2, "failure");

//     cout << str_1 << endl;
//     cout << str_2 << endl;
 
//     return 0;
// }

// 6.44

// // �Ƚ����� string ����ĳ��ȣ�������
// inline bool isShorter(const string &s1, const string &s2) {
//     return s1.size() < s2.size();
// }

// int main() {

//     string s1 = "sunxinghui";
//     string s2 = "sunwukong";

//     if(isShorter(s1, s2)) {
//         cout << "s1 < s2" << endl;
//     }else {
//         cout << "s1 > s2" << endl;
//     }

//     return 0;
// }


// 6.33
// vector<int> vec = {1,2,3,4,5};

// void print(decltype(vec.begin()) s_begin, decltype(vec.begin()) s_end) {

//     if(s_begin != s_end) {
//         cout << *s_begin << endl;
//         print(++s_begin,s_end);
//     }
// }

// int main() {
//     print(vec.begin(),vec.end());
//     return 0;
// }


// 6.47

// vector<int> vec = {1,2,3,4,5};

// void print(decltype(vec.begin()) s_begin, decltype(vec.begin()) s_end) {
//     int i = 0;
//     for (auto m = s_begin; m != s_end; ++m) {
//         ++i;
//     }
//     cout << "size = " << i << endl;
//     if(s_begin != s_end) {
//         cout << *s_begin << endl;
//         print(++s_begin,s_end);
//     }
// }

// int main() {
//     print(vec.begin(),vec.end());
//     return 0;
// }

// NDEBUG

// int threshold = 5;

// void print(const string word) {
   
//     #ifndef NDEBUG
//         if (word.size() < threshold) {
//         //  _ _func_ _ �Ǳ����������һ���ֲ���̬���������ڴ�ź���������
//         std::cerr << " Error: " << __FILE__
//                   << " : in function " << __func__
//                   << " at line " << __LINE__ << endl
//                   << "      Compiled on " << __DATE__
//                   << " at " << __TIME__ << endl
//                   << "      Word rea was \" " << word
//                   << " \": Length too short " << endl;
//         }
//     #endif

// }

// int main() {
//     print("hui");
//     return 0;
// }


// 6.51

// void f() {
//     cout << "this is one" << endl;
// }

// void f(int) {
//     cout << "this is two" << endl;
// }

// void f(int, int) {
//     cout << "this is three" << endl;
// }

// void f(double, double = 3.14) {
//     cout << "this is four" << endl;
// }

// int main() {
    
//     f(42, 0);

//     return 0;
// }

// �����������������ԣ���Ϊ 3.14 �� float ת��Ϊ double ������ float ת��Ϊ long ����ߡ�
// �����������͵�ת���ļ���һ����

// void manip(long) {
//     cout << "one" << endl;
// }

// void manip(float) {
//     cout << "two" << endl;
// }

// int main() {
//     manip(3.14);
//     return 0;
// }

// �������������������ԣ���Ϊ 3.14 ���� double ��������ת����

// void manip(long) {
//     cout << "one" << endl;
// }

// void manip(double) {
//     cout << "two" << endl;
// }

// int main() {
//     manip(3.14);
//     return 0;
// }

// 6.52

// void manip(int, int) {

// }

// 6.53

// ����const ��������

// int calc(int &, int &) {
//     cout << "one" << endl;
//     return 0;
// }

// int calc(const int &, const int &) {
//     cout << "two" << endl;
//     return 0;
// }

// ���� const ��������

// int calc(char *, char *) {
//     cout << "one" << endl;
//     return 0;
// }
// int calc(const char*, const char*) {
//     cout << "two" << endl;
//     return 0;
// }

// �ײ� const ����������

// int calc(char *, char *) {
//     cout << "one" << endl;
//     return 0;
// }
// int calc(char * const, char * const) {
//     cout << "two" << endl;
//     return 0;
// }

// char a = 'a';
// char b = 'b';

// int main() {

//     int a = 1;
//     int b = 2;

//     calc(a, b); // one
//     calc(1, 2); // two

//     return 0;
// }

// 6.54

// int func(int a, int b) {
//     return a + b;
// }

// int func1(int a, int b) {
//     return a-b;
// }

// int (*p)(int ,int) = func;

// vector<decltype(p)> vec{nullptr};       // ����vector���󣬸ö����Ԫ��Ϊָ������ָ��

// int main() {

//     vec[0] = func1;                     // ����0������ָ��ָ�� func1 ����
//     vec.push_back(func);                // �ڵ�0������ָ��������һ��Ԫ��

//     int cc = (*vec[0])(2,3);            // ���õ�0������ָ��ָ��ĺ���
//     int c = (*vec[1])(1,2);             // ���õ�1������ָ��ָ��ĺ���

//     cout << vec.size() << endl;         // vector ����Ĵ�С
//     cout << " c = " << c << endl;       // 
//     cout << " cc = " << cc << endl;

//     return 0;
// }

// 6.55, 6.56

// int func_add(int a, int b) {
//     return a+b;
// }

// int func_sub(int a, int b) {
//     return a-b;
// }

// int func_mul(int a, int b) {
//     return a*b;
// }

// int func_div(int a, int b) {
//     return a/b;
// }

// int (*p)(int , int);

// vector<decltype(p)> vec = {nullptr,func_add,func_sub,func_mul,func_div};

// int main() {
    
//     cout << "6+2 = " << (*vec[1])(6,2) << endl;
//     cout << "6-2= "  << (*vec[2])(6,2) << endl;
//     cout << "6*2 = " << (*vec[3])(6,2) << endl;
//     cout << "6/2 = " << (*vec[4])(6,2) << endl;

//     return 0;
// }
