#ifndef UNTITLED5_HEROCONTROLLER_H
#define UNTITLED5_HEROCONTROLLER_H

#include "Hero.h"
#include "GameMap.h"

class HeroController {
public:
    explicit HeroController(const GameMap& gameMap)
        : m_gameMap(gameMap)
    {
        m_hero = std::make_shared<Hero>();
    }
    explicit HeroController(GameMap&& gameMap)
            : m_gameMap(gameMap)
    {
        m_hero = std::make_shared<Hero>();
    }

private:
    std::shared_ptr<Hero> m_hero;
    GameMap m_gameMap;
};


#endif //UNTITLED5_HEROCONTROLLER_H
