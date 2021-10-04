#ifndef GAMECELLS_WORLDMAP_H
#define GAMECELLS_WORLDMAP_H

#include <vector>
#include <memory>
#include <random>
#include <chrono>
#include <exception>

#include "../DataObjects/Cell.h"
#include "../GameObjects/GameObject.h"

class WorldMap {
public:
    explicit WorldMap(const int rowsNum, const int columnsNum) {
        m_rowsNum = rowsNum;
        m_columnsNum = columnsNum;
        m_mapCells.resize(rowsNum, std::vector<std::shared_ptr<GameObject>>(columnsNum));
    }
    void addObject(const std::shared_ptr<GameObject>& object) {
        Cell availableCell = m_getAvailableCell(object->getType());
        m_mapCells[availableCell.row][availableCell.column] = object;
    }
    std::shared_ptr<GameObject> getObjectInCell(const Cell& cell) {
        return m_mapCells[cell.row][cell.column];
    }

    Cell getCellOfObject(std::shared_ptr<GameObject>) {

    }

private:
    Cell m_getAvailableCell(TypeGameObject type) {
        // logic
        Cell cellForGameObject{0, 0};
        while (m_mapCells[cellForGameObject.row][cellForGameObject.column] != nullptr) {
            cellForGameObject = m_getRandomCell();
        }
        return cellForGameObject;
    }

    Cell m_getRandomCell() const {
        std::mt19937 engine(std::chrono::steady_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> rowNumUniformIntDistribution(
                0, m_rowsNum-1);
        std::uniform_int_distribution<int> columnNumUniformIntDistribution(0, m_columnsNum-1);

        return Cell{rowNumUniformIntDistribution(engine), columnNumUniformIntDistribution(engine)};
    }


    std::vector<std::vector<std::shared_ptr<GameObject>>> m_mapCells;
    int m_rowsNum{0};
    int m_columnsNum{0};
};


#endif //GAMECELLS_WORLDMAP_H
