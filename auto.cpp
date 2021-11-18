#include <iostream>

using namespace std;

class Auto {
    const int id;
    unsigned int sebesseg = 0;

public:
    Auto(int id): id(id) {}

    Auto& operator++() {
        cout << "E" << id;
        sebesseg++;
        return *this;
    }

    Auto operator++(int) {
        cout << "T" << id;
        Auto regi = *this;
        operator++();
        return regi;
    }

    unsigned int get_sebesseg() const {
        return sebesseg;
    }
};

void gyorsit(Auto& a1, Auto& a2) {
    ++a1;
    a2++;
}
