#include "Toy.hpp"

Toy::Toy() : name("None"), manufacturer("None"), price(0) {}

Toy::Toy(string name, string manufacturer, double price) 
{
    this -> name = name;
    this -> manufacturer = manufacturer;
    this -> price = price;
}

Toy& Toy::operator=(const Toy& toy)
{  
    //check for self-assign
    if(this == &toy) return *this;

    this -> name = toy.name;
    this -> manufacturer = toy.manufacturer;
    this -> price = toy.price;

    return *this;
}

 Toy::Toy(const Toy& toy) 
 {
     name = toy.name;
     manufacturer = toy.manufacturer;
     price = toy.price;
 }

Toy::~Toy() { }

void Toy::printToy() 
{
    cout << name << " " << manufacturer << " " << price << " lei" << endl;
}

string Toy::getName() { return name; }

string Toy::getManufacturer() { return manufacturer; }

double Toy::getPrice() { return price; }