#ifndef GAMECELLS_WALL_H
#define GAMECELLS_WALL_H
#include "GameObject.h"

class Wall : public GameObject {
public:
    explicit Wall (const DataGameObject& dataGameObject)
            : GameObject(dataGameObject)
    {}
};


#endif //GAMECELLS_WALL_H
