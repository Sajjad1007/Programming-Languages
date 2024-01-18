/*
Syntax => std :: unordered_map <keyType, valueType> name;
Syntax => std :: unordered_multimap <keyType, valueType> name;

Notes:

1. Unordered map is an associative container that contains key-value pairs with unique keys.
2. It maintains a collection of unique key-value pairs with fast insertion and deletion.
3. Searching, insertion and deletion have constant time complexity.
4. Internally it uses hashing to insert pairs into buckets.
5. It allows fast access to individual pairs.
6. Unordered multiMap is similar to unordered map except that it can have multiple pairs with same key.
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map <int, char> ump = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    ump.insert({5, 'd'});
    ump.insert(make_pair(3, 'c'));
    ump.insert(pair <int, char> (2, 'b'));
    ump.insert(make_pair(3, 'd'));      //This element will not be inserted.

    cout << "Unordered Map :";
    for(auto& x : ump){
        cout << " {" << x.first << ", " << x.second << "}";
    }
    cout << '\n';

    auto s = ump.find(2);
    if(s != ump.end()){
        cout << "{" << s->first << ", " << s->second << "} is found" << '\n';
    }
    else cout << "Key is not found" << '\n';

    unordered_multimap <int, char> ummp = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    ummp.insert({5, 'd'});
    ummp.insert(make_pair(3, 'c'));
    ummp.insert(pair <int, char> (2, 'b'));
    ummp.insert(make_pair(3, 'd'));     //This element will be inserted.

    //Similar numbers will be printed together because they are in same buckets.
    cout << "\nUnordered multiMap :";
    for(auto& x : ummp){
        cout << " {" << x.first << ", " << x.second << "}";
    }
    cout << '\n';

    s = ummp.find(4);
    if(s != ummp.end()){
        cout << "{" << s->first << ", " << s->second << "} is found" << '\n';
    }
    else cout << "Key 4 is not found" << '\n';

    cout << "\nNumber of 3s = " << ummp.count(3) << '\n';
    return 0;
}

/*
Unordered Map : {5, d} {3, c} {2, b} {1, a}
{2, b} is found

Unordered multiMap : {1, a} {2, b} {2, b} {3, d} {3, c} {3, c} {5, d}
Key 4 is not found

Number of 3s = 3
*/
