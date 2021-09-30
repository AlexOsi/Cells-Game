#ifndef UNTITLED5_GAMEMAP_H
#define UNTITLED5_GAMEMAP_H

#include <vector>
#include <memory>
#include <random>
#include <chrono>

#include "GameObject.h"

struct Cell {
    int row;
    int column;
};

class GameMap {
public:
    explicit GameMap(const int rowsNum, const int columnsNum) {
        m_rowsNum = rowsNum;
        m_columnsNum = columnsNum;
        m_mapCells.resize(rowsNum, std::vector<std::shared_ptr<GameObject>>(columnsNum));
    }
    void addObject(const std::shared_ptr<GameObject>& object) {
        Cell availableCell = getAvailableRandomCell(object->getType());
        m_mapCells[availableCell.row][availableCell.column] = object;
    }
    std::shared_ptr<GameObject> getObjectInCell(const Cell& cell) {
        return m_mapCells[cell.row][cell.column];
    }
private:
    Cell getAvailableRandomCell(GameObjectType type) {
        // logic
        std::mt19937 engine(std::chrono::steady_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> rowNumUniformIntDistribution(
                0, m_rowsNum-1);
        std::uniform_int_distribution<int> columnNumUniformIntDistribution(0, m_columnsNum-1);

        int randomRow = rowNumUniformIntDistribution(engine);
        int randomColumn = columnNumUniformIntDistribution(engine);
        if (m_mapCells[randomRow][randomColumn] == nullptr) {
            return Cell{randomRow, randomColumn};
        }
        // else try again
    }
    std::vector<std::vector<std::shared_ptr<GameObject>>> m_mapCells; // error
    int m_rowsNum;
    int m_columnsNum;
};


#endif //UNTITLED5_GAMEMAP_H
