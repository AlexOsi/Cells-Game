#ifndef GAMECELLS_SPAWNER_H
#define GAMECELLS_SPAWNER_H

#include <vector>
#include "GameObjectFactory.h"
#include "../GameMaps/WorldMap.h"

class Spawner {
    /*
     * Возможно стоит заменить на lambda
     * Спавнит определенное количество объектов
     * И передаёт мировой карте для распределения по карте
     * Использует GameObjectFactory
     * */
public:
    explicit Spawner(WorldMap& worldMap, const std::vector<std::pair<TypeGameObject, int>>& gameObjectsAmountByType)
        : m_worldMap(worldMap), m_gameObjectsAmountByType(gameObjectsAmountByType)
    {}
    void Spawn();

private:
    WorldMap m_worldMap;
    std::vector<std::pair<TypeGameObject, int>> m_gameObjectsAmountByType;

};


#endif //GAMECELLS_SPAWNER_H
