//
// Created by papik on 13.05.18.
//

#ifndef LOSOWANIE_FORUM_LOTTO_H
#define LOSOWANIE_FORUM_LOTTO_H


#include <vector>

#include "Player.h"
#include "Prize.h"

class Lotto {

private:

    std::vector<Player> players;
    std::vector<Prize> prizes;

public:

    Lotto();

    virtual ~Lotto();

    void addPlayer(Player& player);
    bool removePlayer(std::string nick);

    void addPrize(Prize& prize);
    bool removePrize(std::string name);

    


};


#endif //LOSOWANIE_FORUM_LOTTO_H
