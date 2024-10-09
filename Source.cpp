#include <iostream>
#include "Shop.h"

using namespace std;

int main() {
    setlocale(0, "");
    Shop myShop;


    Overcoat coat1("Зимовий", "чоловічий", "L", 120.0);
    Overcoat coat2("Осінній", "жіночий", "M", 80.0);
    Overcoat coat3("Весняний", "дитячий", "S", 60.0);

    myShop.addOvercoat(coat1);
    myShop.addOvercoat(coat2);
    myShop.addOvercoat(coat3);

    if (coat1 == coat2) {
        cout << "Типи одягу однакові." << endl;
    }
    else {
        cout << "Типи одягу різні." << endl;
    }

    if (coat1 > coat2) {
        cout << "Куртка 1 дорожча за куртку 2." << endl;
    }

    cout << "Початковий розмір куртки 1: " << coat1.getSize() << endl;
    ++coat1; 
    cout << "Новий розмір куртки 1: " << coat1.getSize() << endl;

    coat1--; 
    cout << "Розмір куртки 1 після декременту: " << coat1.getSize() << endl;


    myShop.displayAll();

    return 0;
}
