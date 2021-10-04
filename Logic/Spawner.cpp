#include "Spawner.h"

void Spawner::Spawn() {
    for (auto gameObjectAmountByType : m_gameObjectsAmountByType) {
        switch(gameObjectAmountByType.first) {
            case TypeGameObject::Hero:
                m_worldMap.addObject(GameObjectFactory::createGameObject(
                        {TypeGameObject::Hero, Image{'*'}}));
                break;
            case TypeGameObject::Monster:
                m_worldMap.addObject(GameObjectFactory::createGameObject(
                        {TypeGameObject::Monster, Image{'#'}}));
                break;
            case TypeGameObject::Wall:
                m_worldMap.addObject(GameObjectFactory::createGameObject(
                        {TypeGameObject::Monster, Image{'|'}}));
                break;
            default:
                break;
        }

    }
}
