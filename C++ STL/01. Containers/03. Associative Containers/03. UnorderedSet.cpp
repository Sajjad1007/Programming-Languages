/*
Syntax => std :: unordered_set <objectType> name;
Syntax => std :: unordered_multiset <objectType> name;

Notes:

1. Unordered set is an associative container that contains a set of unique elements.
2. It maintains a collection of unique elements with fast insertion and deletion.
3. Searching, insertion and deletion have constant time complexity.
4. Internally it uses hashing to insert elements into buckets.
5. It allows fast access to individual elements.
6. Unordered multiset is similar to unordered set except that it can have multiple elements with same value.
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set <int> ust = {4, 1, 2, 3, 9, 4, 3, 2, 9, 8};
    cout << "Unordered set :";
    for(auto& x : ust)
    {
        cout << " " << x;
    }
    cout << '\n';

    auto s = ust.find(2);
    if(s != ust.end())
    {
        cout << (*s) << " is found" << '\n';
    }
    else
    {
        cout << "Element is not found" << '\n';
    }

    unordered_multiset <int> umst = {4, 1, 2, 3, 9, 4, 3, 2, 9, 8};
    // Similar numbers will be printed together because they are in same buckets.
    cout << "\nUnordered multiSet :";
    for(auto& x : umst)
    {
        cout << " " << x;
    }

    s = umst.find(6);
    if(s != umst.end())
    {
        cout << (*s) << " is found" << '\n';
    }
    else
    {
        cout << "\n6 is not found" << '\n';
    }

    cout << "\nNumber of 4s = " << umst.count(4) << '\n';
    return 0;
}

/*
Unordered set : 8 9 3 2 1 4
2 is found

Unordered multiSet : 8 9 9 3 3 2 2 1 4 4
6 is not found

Number of 4s = 2
*/
