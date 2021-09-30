#ifndef GAMECELLS_MONSTER_H
#define GAMECELLS_MONSTER_H
#include "GameObject.h"

class Monster : public GameObject {
public:
    explicit Monster (const DataGameObject& dataGameObject)
            : GameObject(dataGameObject)
    {}
};


#endif //GAMECELLS_MONSTER_H
