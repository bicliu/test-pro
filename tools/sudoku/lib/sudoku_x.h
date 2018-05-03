#ifndef SUDOKU_X_H
#define SUDOKU_X_H

#include <vector>
#include <cstring>

typedef unsigned char  uint8;
typedef unsigned int   uint;

struct unit_t{
    uint8 fix;
    std::vector<uint8> may;
    std::vector<uint8> need;
    std::vector<uint8> cannot;

    void SetNull()
    {
        fix = 0;
        may.clear();
        need.clear();
        cannot.clear();
    }
};

template<uint XVAL>
class Sudoku_X
{
protected:
    enum { WIDTH=XVAL };
    unit_t form[WIDTH][WIDTH];
public:
    Sudoku_X()
    {
        for(uint i = 0; i < WIDTH; i++)
            for(uint j = 0; j < WIDTH; j++)
                form[i][j].SetNull();
    }

    void SetNull()
    {
        for(uint i = 0; i < WIDTH; i++)
            for(uint j = 0; j < WIDTH; j++)
                form[i][j].SetNull();
    }
};

#endif
