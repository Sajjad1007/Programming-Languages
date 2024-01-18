#include <iostream>

using namespace std;

class Room{

private:
    double length;
    double width;
    double height;

public:
    Room()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    Room(double length, double width, double height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    double area()
    {
        return length * width;
    }

    double volume()
    {
        return length * width * height;
    }

    double get_length()
    {
        return length;
    }

    double get_width()
    {
        return width;
    }

    double get_height()
    {
        return height;
    }

    void set_length(double length)
    {
        if(this->length > 0) this->length = length;
        return;
    }

    void set_width(double width)
    {
        if(this->width > 0) this->width = width;
        return;
    }

    void set_height(double height)
    {
        if(this->height > 0) this->height = height;
        return;
    }

};

int main()
{
    Room room1;                         //In C++, objects does not need to be initialized using new.
    Room room2(2, 1.5, 1.2);            //A variable has been initialized, not a pointer.
    Room room3 = room2;                 //Value of the object has been copied, not address.
    Room *room4 = new Room(5, 4, 3);
    Room *room5 = room4;

    cout << "Before altering the values...\n\n";
    cout << "Area of the room 1 = " << room1.area() << "\n";
    cout << "Area of the room 2 = " << room2.area() << "\n";
    cout << "Area of the room 3 = " << room3.area() << "\n";
    cout << "Area of the room 4 = " << room4->area() << "\n";
    cout << "Area of the room 5 = " << room5->area() << "\n";

    room3.set_length(3);
    room5->set_length(6.2);

    cout << "\n\nAfter altering the values...\n\n";
    cout << "Area of the room 1 = " << room1.area() << "\n";
    cout << "Area of the room 2 = " << room2.area() << "\n";
    cout << "Area of the room 3 = " << room3.area() << "\n";
    cout << "Area of the room 4 = " << room4->area() << "\n";
    cout << "Area of the room 5 = " << room5->area() << "\n";
    cout << "\n";
    return 0;
}

/*
Before altering the values...

Area of the room 1 = 1
Area of the room 2 = 3
Area of the room 3 = 3
Area of the room 4 = 20
Area of the room 5 = 20


After altering the values...

Area of the room 1 = 1
Area of the room 2 = 3
Area of the room 3 = 4.5
Area of the room 4 = 24.8
Area of the room 5 = 24.8
*/
