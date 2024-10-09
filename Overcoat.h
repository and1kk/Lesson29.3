#include <iostream>
#include <string>

using namespace std;

class Overcoat {
private:
    string name;
    string type; // "чоловічий", "жіночий", "дитячий"
    string size;   
    double price;

public:

    Overcoat();


    Overcoat(string n, string t, string s, double p);

   
    void setName(const string& n);
    void setType(const string& t);
    void setSize(string s);
    void setPrice(double p);

    
    string getName() const;
    string getType() const;
    string getSize() const;
    double getPrice() const;

    friend ostream& operator<<(ostream& os, const Overcoat& overcoat);
    friend istream& operator>>(istream& is, Overcoat& overcoat);


    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator>=(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    bool operator<=(const Overcoat& other) const;


    Overcoat& operator++();    // Префіксний
    Overcoat operator++(int);   // Постфіксний
    Overcoat& operator--();    // Префіксний
    Overcoat operator--(int);   // Постфіксний
};