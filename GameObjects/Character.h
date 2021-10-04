#ifndef GAMECELLS_CHARACTER_H
#define GAMECELLS_CHARACTER_H

#include "GameObject.h"

struct DataCharacter {
    int healthPoints;
    int power;
};

class Character : public GameObject {
public:
    explicit Character(const DataGameObject& dataGameObject, const DataCharacter& dataCharacter)
        : GameObject(dataGameObject), m_dataCharacter(dataCharacter)
    {}
private:
    DataCharacter m_dataCharacter;
};


#endif //GAMECELLS_CHARACTER_H
