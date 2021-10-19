#ifndef GAMECELLS_HERO_H
#define GAMECELLS_HERO_H

#include "GameObject.h"

class Hero : public GameObject {
public:
    explicit Hero (const DataGameObject& dataGameObject)
        : GameObject(dataGameObject)
    {}
};


#endif //GAMECELLS_HERO_H
