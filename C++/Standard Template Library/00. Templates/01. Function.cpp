/*
Template is the way to write generic programs.
Here we pass data type as parameter to function or class.
*/

#include <iostream>

using namespace std;

void fun(int const& a, int const& b)
{
    cout << "fun(int, int)\n";
    return;
}

template <typename T>
void fun(T const& a, T const& b)
{
    cout << "fun(T, T)\n";
    return;
}

template <typename T>
void fun(T const& a, T const& b, T const& c)
{
    cout << "fun(T, T, T)\n";
    return;
}

int main()
{
    cout << "Function calls\n";
    // Calling max() function of current scope
    cout << "\nfun(10.0, 20.0) => ";
    :: fun(10.0, 20.0);

    // Deducing data type from parameter list
    cout << "\nfun(\'a\', \'b\') => ";
    :: fun('a', 'b');

    cout << "\nfun(10, 20) => ";
    :: fun(10, 20);

    cout << "\nfun <> (10, 20) => ";
    :: fun <> (10, 20);

    cout << "\nfun <double> (10, 20) => ";
    // Mentioning data type explicitly
    :: fun <double> (10, 20);

    cout << "\nfun(10, 20, 30) => ";
    :: fun(10, 20, 30);
    return 0;
}

/*
Function calls

fun(10.0, 20.0) => fun(T, T)

fun('a', 'b') => fun(T, T)

fun(10, 20) => fun(int, int)

fun <> (10, 20) => fun(T, T)

fun <double> (10, 20) => fun(T, T)

fun(10, 20, 30) => fun(T, T, T)
*/
