#include "Box.h"

void Box::setDetails(int pwidth , int pheight , int pLength){
  length = pLength;
  width = pwidth;
  height = pheight;
}
// Implement setters and getters
int Box::getHeight(){
  return height;
}

int Box::getLength(){
  return length;
}

int Box::getWidth(){
  return width();
}
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int volume;

  volume = length*width*height;
  return volume;
}
