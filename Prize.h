//
// Created by papik on 12.05.18.
//

#ifndef LOSOWANIE_FORUM_PRIZE_H
#define LOSOWANIE_FORUM_PRIZE_H

#include <string>
#include <ostream>

class Prize {

private:
    std::string name;
    int amount;
public:
    Prize();

    Prize(const std::string &name, int amount);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getAmount() const;

    void setAmount(int amount);

    virtual ~Prize();

    friend std::ostream &operator<<(std::ostream &os, const Prize &prize);
    friend std::istream& operator >> (std::istream & input, Prize& prize);
};


#endif //LOSOWANIE_FORUM_PRIZE_H
