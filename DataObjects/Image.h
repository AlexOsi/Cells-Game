#ifndef GAMECELLS_IMAGE_H
#define GAMECELLS_IMAGE_H


class Image {
public:
    explicit Image (char symbol)
        : m_symbol(symbol)
    {}

    char getSymbol() const;

    void setSymbol(char symbol);
private:
    char m_symbol;
};


#endif //GAMECELLS_IMAGE_H
