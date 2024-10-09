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
    // ��������� ����� � �������
    void addOvercoat(const Overcoat& overcoat);

    // ��������� ����� �� ��������
    void removeOvercoat(size_t index);

    // ����������� ������ �����
    void editSize(size_t index, string newSize);

    // ����� �������� �� �����
    void searchByType(const string& type) const;

    // ��������� ��� ������ � �������
    void displayAll() const;
};

#endif // SHOP_H
