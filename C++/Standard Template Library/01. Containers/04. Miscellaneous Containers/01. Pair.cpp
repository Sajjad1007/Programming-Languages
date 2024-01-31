/*
Syntax => std :: pair <keyType, valueType> name;

Notes:

1. Pair is a struct template/basic header container that provides a way to store two heterogeneous objects as a single unit.
2. Map, multimap, unordered map, unordered multimap can use pair to insert data into their structures.
*/

#include <iostream>
#include <vector>

using namespace std;

void print_pair(pair <string, int> p)
{

    cout << p.first << " " << p.second << '\n';
    return;
}

int main()
{
    vector <pair <string, int>> vp;
    vp.push_back(make_pair("Nabil", 30));
    vp.push_back(make_pair("Nasif", 28));
    vp.push_back(pair <string, int> ("Taha", 22));
    vp.push_back(make_pair("Zainab", 12));

    cout << "Pairs are :\n\n";
    for(auto& x : vp)
    {
        print_pair(x);
    }
    return 0;
}

/*
Pairs are :

Nabil 30
Nasif 28
Taha 22
Zainab 12
*/
