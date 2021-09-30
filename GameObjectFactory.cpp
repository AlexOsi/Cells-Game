
#include "GameObjectFactory.h"

std::shared_ptr<GameObject> GameObjectFactory::createGameObject(GameObjectType type) {
    switch (type) {
        case GameObjectType::Hero:
            return std::make_shared<Hero>();
        case GameObjectType::Monster:
            return std::make_shared<Monster>();
        case GameObjectType::Wall:
            return std::make_shared<Wall>();
        default: // nothing
            return nullptr;
    }

}
