#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "Piece.hpp"


using namespace std;

void getParams(const char* fileName)
{
  std::ifstream infile(fileName);
  string param_name;
  int param_value;
  
  while (infile >> param_name >> param_value)
    {
    std:cout << param_name << "vaut " << param_value << std::endl;
    }
  
}

void getData(const char* fileName)
{
  std::ifstream infile(fileName);
  int minDx, maxDx, minDy, maxDy;
  
  vector<Piece> mesPieces;
  int i = 0;
  while (infile >> minDx >> maxDx >> minDy >> maxDy)
    {
      mesPieces.push_back(Piece(minDx, maxDx, minDy, maxDy));
    }

  std::cout << "Les dimensions de la maison sont : (largeur : ["<< mesPieces[0].getMaxDx() << "] , hauteur : [" << mesPieces[0].getMaxDy() << "])"<< std::endl;
  std::cout << "Les pièces de la maisons sont : " << std::endl;
  for(i=0; i<mesPieces.size(); i++) {
    if(i > 0) {
      std::cout << "Pièce " << (i+1) << " minDx : "<< mesPieces[i].getMinDx() << ", " << "maxDx : " << mesPieces[i].getMaxDx() << ", " << "minDy : " << mesPieces[i].getMinDy() << ", " << "maxDy : " << mesPieces[i].getMaxDy()<< std::endl;   
    }
  }
  
}

int main() {

  const char* dataFileName = "data_binPacking.txt";
  getData(dataFileName);

  const char* paramsFileName = "params_binPacking.txt";
  getParams(paramsFileName);
  
  return 0;
}
