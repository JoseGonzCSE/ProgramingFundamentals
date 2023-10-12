#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstring>

using namespace std;

class Rectangle
{
private:
    double width;
    double length;
    char* name;
    void initName(char* );
public:
    //constructors
    Rectangle();
    Rectangle(double, double,
        char*);
    //destructor
    ~Rectangle();
    void setWidth(double);
    void setLength(double);
    void setWidth(char*);
    void setLength(char*);
    void setName(char*);
    double getWidth() const
    {
        return width;
    }
    double getLength() const {
        return length;
    }
    void printName() const
    {
        cout << name;
    }
    double getArea() const {
        return width * length;
    }
};

Rectangle::Rectangle(double w, double l, char* n) {
    width = w;
    length = l;
    initName(n);
}
Rectangle::Rectangle() {
    width = 0;
    length = 0;
    initName((char*)"Default");
}
Rectangle::~Rectangle() {
    delete[]name;
    name = NULL;
}
void Rectangle::setWidth(double w) {
    width = w;
}
void Rectangle::setLength(double l) {
    length = l;
}
void Rectangle::setName(char* c) {
    initName(c);
}
void Rectangle::setWidth(char* w) {
    double myWidth = atof(w);
    width = myWidth;
}
void Rectangle::setLength(char* l) {
    double myLength = atof(l);
    length = myLength;
}
void Rectangle::initName(char* n) {
    name = new char[128];
    strcpy(name, n);
}

int main() {
   
    Rectangle house[] = { Rectangle(10, 12,(char*) "Kitchen"),
                           Rectangle(20, 20,(char*)"Bedroom"),
                           Rectangle(8, 12, (char*)"Offce") };

    house[2].setName((char*)"office");

    for (int i = 0; i < 3; i++) {
        house[i].printName();
        cout << " has an area of: " << house[i].getArea() << endl;
    }
    return 0;
}