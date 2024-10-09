#include "Overcoat.h"


Overcoat::Overcoat() : name(""), type(""), size("M"), price(0.0) {}


Overcoat::Overcoat(string n, string t, string s, double p) : name(n), type(t), size(s), price(p) {}


void Overcoat::setName(const string& n) { name = n; }
void Overcoat::setType(const string& t) { type = t; }
void Overcoat::setSize(string s) { size = s; }
void Overcoat::setPrice(double p) { price = p; }


string Overcoat::getName() const { return name; }
string Overcoat::getType() const { return type; }
string Overcoat::getSize() const { return size; }
double Overcoat::getPrice() const { return price; }


ostream& operator<<(ostream& os, const Overcoat& overcoat) {
    os << "Назва: " << overcoat.name << ", Тип: " << overcoat.type
        << ", Розмір: " << overcoat.size << ", Ціна: " << overcoat.price;
    return os;
}

istream& operator>>(istream& is, Overcoat& overcoat) {
    cout << "Введіть назву: ";
    is >> overcoat.name;
    cout << "Введіть тип: ";
    is >> overcoat.type;
    cout << "Введіть розмір: ";
    is >> overcoat.size;
    cout << "Введіть ціну: ";
    is >> overcoat.price;
    return is;
}


bool Overcoat::operator==(const Overcoat& other) const {
    return this->type == other.type;
}

bool Overcoat::operator!=(const Overcoat& other) const {
    return !(*this == other);
}

bool Overcoat::operator>(const Overcoat& other) const {
    return this->price > other.price;
}

bool Overcoat::operator>=(const Overcoat& other) const {
    return this->price >= other.price;
}

bool Overcoat::operator<(const Overcoat& other) const {
    return this->price < other.price;
}

bool Overcoat::operator<=(const Overcoat& other) const {
    return this->price <= other.price;
}


Overcoat& Overcoat::operator++() {
  
    if (size == "S") size = "M";
    else if (size == "M") size = "L";
    else if (size == "Lv") size = "XL";
    return *this;
}

Overcoat Overcoat::operator++(int) {
    
    Overcoat temp = *this;
    ++(*this);
    return temp; 
}

Overcoat& Overcoat::operator--() {
   
    if (size == "XL") size = "L";
    else if (size == "L") size = "M";
    else if (size == "M") size = "S";
    return *this;
}

Overcoat Overcoat::operator--(int) {
   
    Overcoat temp = *this; 
    --(*this); 
    return temp; 
}
