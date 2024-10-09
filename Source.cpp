#include <iostream>
#include "Shop.h"

using namespace std;

int main() {
    setlocale(0, "");
    Shop myShop;


    Overcoat coat1("�������", "��������", "L", 120.0);
    Overcoat coat2("�����", "������", "M", 80.0);
    Overcoat coat3("��������", "�������", "S", 60.0);

    myShop.addOvercoat(coat1);
    myShop.addOvercoat(coat2);
    myShop.addOvercoat(coat3);

    if (coat1 == coat2) {
        cout << "���� ����� �������." << endl;
    }
    else {
        cout << "���� ����� ���." << endl;
    }

    if (coat1 > coat2) {
        cout << "������ 1 ������� �� ������ 2." << endl;
    }

    cout << "���������� ����� ������ 1: " << coat1.getSize() << endl;
    ++coat1; 
    cout << "����� ����� ������ 1: " << coat1.getSize() << endl;

    coat1--; 
    cout << "����� ������ 1 ���� ����������: " << coat1.getSize() << endl;


    myShop.displayAll();

    return 0;
}
