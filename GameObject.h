#ifndef UNTITLED5_GAMEOBJECT_H
#define UNTITLED5_GAMEOBJECT_H

enum class GameObjectType {
    Hero,
    Monster,
    Wall,
    Nothing
};


class GameObject {
public:
    GameObjectType getType() {
        return type;
    }
private:
    GameObjectType type;
    //char value; // gui?
};


#endif //UNTITLED5_GAMEOBJECT_H
