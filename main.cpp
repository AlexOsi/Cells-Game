#include <iostream>

#include "GameMap/GameMap.h"
#include "Logic/GameObjectFactory.h"

int main() {
    GameMap gameMap(100, 100);
    gameMap.addObject(GameObjectFactory::createGameObject(TypeGameObject::Monster));
}
