#include "GameObject.h"

TypeGameObject GameObject::getType() const {
    return m_dataGameObject.typeGameObject;
}

Image GameObject::getImage() const {
    return m_dataGameObject.image;
}

void GameObject::setDataGameObject(const DataGameObject &dataGameObject) {
    m_dataGameObject = dataGameObject;
}
