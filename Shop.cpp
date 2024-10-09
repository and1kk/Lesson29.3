
#include "Shop.h"

void Shop::addOvercoat(const Overcoat& overcoat) {
    shop.push_back(overcoat);
    cout << "ќд€г додано до магазину." << endl;
}

void Shop::removeOvercoat(size_t index) {
    if (index < shop.size()) {
        shop.erase(shop.begin() + index);
        cout << "ќд€г видалено з магазину." << endl;
    }
    else {
        cout << "≤ндекс поза межами масиву." << endl;
    }
}


void Shop::editSize(size_t index, string newSize) {
    if (index < shop.size()) {
        shop[index].setSize(newSize);
        cout << "–озм≥р од€гу оновлено." << endl;
    }
    else {
        cout << "≤ндекс поза межами масиву." << endl;
    }
}


void Shop::searchByType(const string& type) const {
    cout << "–езультати пошуку за типом '" << type << "':" << endl;
    bool found = false;
    for (const auto& overcoat : shop) {
        if (overcoat.getType() == type) {
            cout << overcoat << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Ќе знайдено жодного елемента з вказаним типом." << endl;
    }
}


void Shop::displayAll() const {
    cout << "—писок вс≥х товар≥в у магазин≥:" << endl;
    for (const auto& overcoat : shop) {
        cout << overcoat << endl;
    }
}
