#include <iostream>
#include "ComplexNumber.h"
#include <cmath>

using namespace std;


int CN::get_x() {
    return x;
};

int CN::get_y() {
    return y;
};

void CN::set_x(int t) {
    x = t;
}

void CN::set_y(int t) {
    y = t;
}

void CN::show() {
    cout << x << " + " << y << "i";
}

void CN::summ(CN& z) {
    x += z.x;
    y += z.y;
}

void CN::mult(CN& z) {
    x = x * z.x - y * z.y;
    y = x * z.y + z.x * y;
}

void CN::mult_n(int n) {
    x *= n;
    y *= n;
}

CN CN::summ_n(CN& z) {
    CN temp(x + z.x, y + z.y);
    return temp;
}

CN CN::mult_n(CN& z) {
    CN temp(x * z.x - y * z.y, x * z.y + z.x * y);
    return temp;
}

CN CN::mult_n_m(int n) {
    CN temp(x * n, y * n);
}

int CN::modul() {
    return sqrt(x * x + y * y);
}

int CN::Sravni(CN& z) {
    if (x > z.x) {
        return 1;
    }
    else if (x < z.x) {
        return -1;
    }
    else {
        if (y > z.y) {
            return 1;
        }
        else if (y < z.y) {
            return -1;
        }
        else {
            return 0;
        }
    }
}

CN::CN(int m, int n) {
    x = m;
    y = n;
}

CN::CN(CN& z) {
    x = z.x;
    y = z.y;
}

CN::~CN() {
    cout << "Propal";
}