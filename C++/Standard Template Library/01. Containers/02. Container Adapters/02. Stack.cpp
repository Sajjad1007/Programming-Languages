/*
Syntax => std :: stack <objectType> name;

Notes:

1. Stack is a container adapter that gives the programmer the functionality of a stack.
2. Internally it uses deque STL container(that is why it is an adapter).
3. It is LIFO(last-in-first-out) data structure.
4. It allows to push and pop only from back.
5. If we want to use vector container instead of deque, we can declare stack like std :: stack <objectType, vector> name;
*/

#include <iostream>
#include <stack>

using namespace std;

void print_stack(stack <int> s)
{
    //We cannot iterate over a stack.
    while(!s.empty()){
        cout << " " << s.top();
        s.pop();
    }
    cout << '\n';
    return;
}

int main()
{
    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "The given stack :";
    print_stack(s);
    return 0;
}

/*
The given stack : 4 3 2
*/
