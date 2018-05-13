//
// Created by papik on 12.05.18.
//

#include <iostream>
#include "Player.h"


const std::string &Player::getNick() const {
    return nick;
}

void Player::setNick(const std::string &nick) {
    Player::nick = nick;
}

int Player::getNumber() const {
    return number;
}

void Player::setNumber(int number) {
    Player::number = number;
}

std::ostream &operator<<(std::ostream &os, const Player &player) {
    os << player.nick << " " << player.number;
    return os;
}

std::istream &operator>>(std::istream &os, Player &player) {

    std::string number;

    os >> player.nick;
    os >> number;

    try { player.number = atoi(number.c_str()); }

    catch (...)
    { std::cout << "Zjebales! Podaj Nick i NUMER.\n"; }



    return os;
}

Player::Player() {

}

Player::Player(std::string nick, int number) : nick(nick), number(number){

}

Player::~Player() {

}
