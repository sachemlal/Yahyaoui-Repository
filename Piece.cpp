#include "Piece.hpp"

Piece::Piece(int minX, int maxX, int minY, int maxY){
  minDx = minX;
  maxDx = maxX;
  minDy = minY;
  maxDy = maxY;
}

int Piece::getMinDx() {
  return minDx;
}

int Piece::getMaxDx() {
  return maxDx;
}

int Piece::getMinDy() {
  return minDy;
}

int Piece::getMaxDy() {
  return maxDy;
}
