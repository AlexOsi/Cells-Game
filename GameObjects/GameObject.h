#ifndef GAMECELLS_GAMEOBJECT_H
#define GAMECELLS_GAMEOBJECT_H

#include "../DataObjects/Image.h"
#include "../DataObjects/Cell.h"

enum class TypeGameObject {
    Hero,
    Monster,
    Wall,
    Nothing
};

struct DataGameObject {
    TypeGameObject typeGameObject;
    Image image;
    Cell cell;
};


class GameObject {
public:
    explicit GameObject(const DataGameObject& dataGameObject)
        : m_dataGameObject(dataGameObject)
    {}
    explicit GameObject(DataGameObject&& dataGameObject)
            : m_dataGameObject(dataGameObject)
    {}

    void setDataGameObject(const DataGameObject& dataGameObject);
    TypeGameObject getType() const;
    Image getImage() const;
private:
    DataGameObject m_dataGameObject;
};


#endif //GAMECELLS_GAMEOBJECT_H
