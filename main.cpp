#include <iostream>

#include "GameMaps/WorldMap.h"
#include "Logic/GameObjectFactory.h"
#include "Logic/Spawner.h"

int main() {
    WorldMap worldMap(100, 100);

    Spawner spawner(worldMap,{
        {TypeGameObject::Hero, 1},
        {TypeGameObject::Monster, 2},
        {TypeGameObject::Wall, 10}});
    spawner.Spawn();

}
