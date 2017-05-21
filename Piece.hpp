#ifndef PIECE_H
#define PIECE_H

class Piece
{
private:
  int minDx, maxDx, minDy, maxDy;
  
public:
  Piece(int minX, int maxX, int minY, int maxY);
  int getMinDx();
  int getMaxDx();
  int getMinDy();
  int getMaxDy();
};

#endif
