//
// Created by papik on 12.05.18.
//

#include <iostream>
#include "Prize.h"

Prize::Prize(const std::string &name, int amount) : name(name), amount(amount) {}

Prize::Prize() {}

Prize::~Prize() {

}

const std::string &Prize::getName() const {
    return name;
}

void Prize::setName(const std::string &name) {
    Prize::name = name;
}

int Prize::getAmount() const {
    return amount;
}

void Prize::setAmount(int amount) {
    Prize::amount = amount;
}

std::ostream &operator<<(std::ostream &os, const Prize &prize) {
    os << "name: " << prize.name << " amount: " << prize.amount;
    return os;
}

std::istream &operator>>(std::istream &input, Prize &prize) {
    std::string amount;
    input>>prize.name>>amount;

    try{
        prize.amount = atoi(amount.c_str());
    }
    catch (...)
    {
        std::cout << "Cos zjebales ;x\n";
    }

    return input;
}
