#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <vector>
#include "Overcoat.h"

using namespace std;

class Shop {
private:
    vector<Overcoat> shop;

public:
    // Додавання одягу в магазин
    void addOvercoat(const Overcoat& overcoat);

    // Видалення одягу за індексом
    void removeOvercoat(size_t index);

    // Редагування розміру одягу
    void editSize(size_t index, string newSize);

    // Пошук елементів за типом
    void searchByType(const string& type) const;

    // Виведення всіх товарів у магазині
    void displayAll() const;
};

#endif // SHOP_H
