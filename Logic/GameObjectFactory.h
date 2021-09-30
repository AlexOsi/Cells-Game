#ifndef GAMECELLS_GAMEOBJECTFACTORY_H
#define GAMECELLS_GAMEOBJECTFACTORY_H

#include <memory>

#include "../GameObjects/GameObject.h"
#include "../GameObjects/Hero.h"
#include "../GameObjects/Monster.h"
#include "../GameObjects/Wall.h"


class GameObjectFactory {
public:
    static std::shared_ptr<GameObject> createGameObject(const DataGameObject& dataGameObject);
};


#endif //GAMECELLS_GAMEOBJECTFACTORY_H
