#ifndef UNTITLED5_GAMEOBJECTFACTORY_H
#define UNTITLED5_GAMEOBJECTFACTORY_H

#include <memory>

#include "GameObject.h"
#include "Hero.h"
#include "Monster.h"
#include "Wall.h"


class GameObjectFactory {
public:
    static std::shared_ptr<GameObject> createGameObject(GameObjectType type);
};


#endif //UNTITLED5_GAMEOBJECTFACTORY_H
