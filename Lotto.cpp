//
// Created by papik on 13.05.18.
//

#include "Lotto.h"

#include <algorithm>
#include <string>

Lotto::Lotto() {}

Lotto::~Lotto() {

}

void Lotto::addPlayer(Player &player) {
    players.push_back(player);
}

bool Lotto::removePlayer(std::string nick) {
    for (auto i = 0; i < players.size(); i++)
        if (std::transform(players[i].getNick().begin(), players[i].getNick().end(), players[i].getNick().begin(),
                           ::toupper) == std::transform(nick.begin(), nick.end(), nick.begin(), ::toupper)) {
            players.erase(players.begin() + i);
            return true;
        }

    return false;
}

void Lotto::addPrize(Prize &prize) {
    this->prizes.push_back(prize);
}

bool Lotto::removePrize(std::string name) {
    for (auto i = 0; i < prizes.size(); i++)
        if (std::transform(prizes[i].getName().begin(), prizes[i].getName().end(), prizes[i].getName().begin(),
                           ::toupper) == std::transform(name.begin(), name.end(), name.begin(), ::toupper)) {
            prizes.erase(prizes.begin() + i);
            return true;
        }

    return false;
}
