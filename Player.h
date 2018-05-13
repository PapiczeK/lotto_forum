//
// Created by papik on 12.05.18.
//

#ifndef LOSOWANIE_FORUM_PLAYER_H
#define LOSOWANIE_FORUM_PLAYER_H

#include <string>
#include <ostream>


class Player {

private:

    std::string nick;
    int number;

public:

    Player();
    Player(std::string nick, int number);
    ~Player();

    const std::string &getNick() const;

    void setNick(const std::string &nick);

    int getNumber() const;

    void setNumber(int number);

    friend std::ostream &operator<<(std::ostream &os, const Player &player);
    friend std::istream& operator >> (std::istream & input, Player& player);
};


#endif //LOSOWANIE_FORUM_PLAYER_H
