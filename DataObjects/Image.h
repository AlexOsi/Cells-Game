#ifndef GAMECELLS_IMAGE_H
#define GAMECELLS_IMAGE_H


class Image {
public:
    char getSymbolRepresentingObject() const {

        return m_symbolRepresentingObject;
    }
    void setSymbolRepresentingObject(char symbolRepresentingObject) {
        m_symbolRepresentingObject = symbolRepresentingObject;
    }
private:
    char m_symbolRepresentingObject;
};


#endif //GAMECELLS_IMAGE_H
