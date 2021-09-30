#include <iostream>

#include "GameMap.h"
#include "GameObjectFactory.h"

int main() {
    GameMap gameMap(100, 100);
    gameMap.addObject(GameObjectFactory::createGameObject(GameObjectType::Monster));
}
