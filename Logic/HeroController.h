#ifndef GAMECELLS_HEROCONTROLLER_H
#define GAMECELLS_HEROCONTROLLER_H

#include "../GameObjects/Hero.h"
#include "../GameMaps/WorldMap.h"

class HeroController {
public:
    explicit HeroController(const WorldMap &worldMap, const std::shared_ptr<Hero>& hero)
        : m_worldMap(worldMap), m_hero(hero)
    {

    }
    explicit HeroController(WorldMap&& gameMap, std::shared_ptr<Hero>&& hero)
            : m_worldMap(gameMap), m_hero(hero)
    {}
    void viewCellsAround() {

    }
    void setVisibility(int rows, int columns) {
        m_rowsVisible = rows;
        m_columnsVisible = columns;
    }
private:
    std::shared_ptr<Hero> m_hero;
    WorldMap m_worldMap;
private:
    int m_rowsVisible{3};
    int m_columnsVisible{3};
};


#endif //GAMECELLS_HEROCONTROLLER_H
