#include "GameObject.h"


void GameObject::setDataGameObject(const DataGameObject &dataGameObject) {
    m_dataGameObject = dataGameObject;
}

DataGameObject GameObject::getDataGameObject() const {
    return m_dataGameObject;
}
