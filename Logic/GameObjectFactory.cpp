
#include "GameObjectFactory.h"

std::shared_ptr<GameObject> GameObjectFactory::createGameObject(const DataGameObject& dataGameObject) {
    switch (dataGameObject.typeGameObject) {
        case TypeGameObject::Hero:
            return std::make_shared<Hero>(dataGameObject);
        case TypeGameObject::Monster:
            return std::make_shared<Monster>(dataGameObject);
        case TypeGameObject::Wall:
            return std::make_shared<Wall>(dataGameObject);
        default: // nothing
            return nullptr;
    }

}
