#ifndef GAMECELLS_HEROCONTROLLER_H
#define GAMECELLS_HEROCONTROLLER_H

#include "../GameObjects/Hero.h"
#include "../GameMap/GameMap.h"

class HeroController {
public:
    explicit HeroController(const GameMap& gameMap, const std::shared_ptr<Hero>& hero)
        : m_gameMap(gameMap), m_hero(hero)
    {}
    explicit HeroController(GameMap&& gameMap, std::shared_ptr<Hero>&& hero)
            : m_gameMap(gameMap), m_hero(hero)
    {}

private:
    std::shared_ptr<Hero> m_hero;
    GameMap m_gameMap;
};


#endif //GAMECELLS_HEROCONTROLLER_H
