
#include "Shop.h"

void Shop::addOvercoat(const Overcoat& overcoat) {
    shop.push_back(overcoat);
    cout << "���� ������ �� ��������." << endl;
}

void Shop::removeOvercoat(size_t index) {
    if (index < shop.size()) {
        shop.erase(shop.begin() + index);
        cout << "���� �������� � ��������." << endl;
    }
    else {
        cout << "������ ���� ������ ������." << endl;
    }
}


void Shop::editSize(size_t index, string newSize) {
    if (index < shop.size()) {
        shop[index].setSize(newSize);
        cout << "����� ����� ��������." << endl;
    }
    else {
        cout << "������ ���� ������ ������." << endl;
    }
}


void Shop::searchByType(const string& type) const {
    cout << "���������� ������ �� ����� '" << type << "':" << endl;
    bool found = false;
    for (const auto& overcoat : shop) {
        if (overcoat.getType() == type) {
            cout << overcoat << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "�� �������� ������� �������� � �������� �����." << endl;
    }
}


void Shop::displayAll() const {
    cout << "������ ��� ������ � �������:" << endl;
    for (const auto& overcoat : shop) {
        cout << overcoat << endl;
    }
}
