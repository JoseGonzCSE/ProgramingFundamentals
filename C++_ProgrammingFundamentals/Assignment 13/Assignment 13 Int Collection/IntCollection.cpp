// IntCollection class implementation Assignment 13 - IntCollection
//Made by: CS 110B Max Luttrell
//Modified by: JoseGonzalez

#include "IntCollection.h"
#include <iostream>

using namespace std;

IntCollection::IntCollection()
{
    //initialize member data to reflect an empty IntCollection
    size = capacity = 0;
    data = nullptr;
}

void IntCollection::addCapacity()
{
    //create a new, bigger buffer, copy the current data to it, delete 
    //the old buffer, and point our data pointer to the new buffer
    //
    //note: there is a more efficient way to do this using the C 
    //memory management function realloc(), but that is beyond the 
    //scope of our course
    int* newData;
    capacity += CHUNK_SIZE;
    newData = new int[capacity];
    for (int i = 0; i < size; i++)
        newData[i] = data[i];
    delete[] data;
    data = newData;
}

void IntCollection::add(int value)
{
    //first, allocate more memory if we need to
    if (size == capacity)
        addCapacity();

    //now, add the data to our array and increment size
    data[size++] = value;
}

int IntCollection::get(int index)
{
    if (index < 0 || index >= size)
    {
        cout << "ERROR: get() trying to access index out of range.\n";
        exit(1);
    }

    return data[index];
}

int IntCollection::getSize()
{
    return size;
}
IntCollection::IntCollection(const IntCollection& c) {
    size = c.size;
    capacity = c.capacity;
    data = c.data;
    for (int i = 0; i < c.size; i++) {
        data[i] = c.data[i];
    }

}
IntCollection& IntCollection::operator=(const IntCollection& c) {
    size = c.size;
    capacity = c.capacity;
    data = new int[size];

    for (int i = 0; i < size; i++) {
        data[i] = c.data[i];
    }
  
    return *this;
}
bool IntCollection::operator==(const IntCollection& c) {
    if ((size == c.size) & (capacity == c.capacity) & (data == c.data)) {
        return true;
    }
    else {
        return false;
    }
}
IntCollection& IntCollection::operator<<(int value) {
    add(value);
    return *this;
    
    
}
IntCollection::~IntCollection() {
    delete[] data;
    data = nullptr;
}