#ifndef GAMECELLS_HEROCONTROLLER_H
#define GAMECELLS_HEROCONTROLLER_H

#include "../GameObjects/Hero.h"
#include "../GameMaps/WorldMap.h"

class HeroController {
public:
    explicit HeroController(const WorldMap &worldMap, const std::shared_ptr<Hero>& hero)
        : m_worldMap(worldMap), m_hero(hero)
    {}
    explicit HeroController(WorldMap&& gameMap, std::shared_ptr<Hero>&& hero)
            : m_worldMap(gameMap), m_hero(hero)
    {}

private:
    std::shared_ptr<Hero> m_hero;
    WorldMap m_worldMap;
};


#endif //GAMECELLS_HEROCONTROLLER_H
