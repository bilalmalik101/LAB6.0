#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

int toGrayScale(int *r, int *g, int *b, Mode mode) {
  //if address pass 0 to funtion they return 1
if(r== NULL || g == NULL || b == NULL){
  return ERROR;
}
//average technique
if (mode == AVERAGE){
  *r=*g=*b=(*r+*g+*b)/3;
}
//lightness techniques
else if(mode == LIGHTNESS){
  *r=*g=*b=(max(*r,*g,*b)+min(*r,*g,*b))/2;
}
//luminosity technique
else if(mode == LUMINOSITY){
  *r=*g=*b=round(0.21* *r+0.72* *g+0.07* *b);
}
return No_error;
}
//function to check sephia condition
int checkSephia(float value){
  return (value<255) ? value : 255;
  
}

int toSepia(int *r, int *g, int *b) {
  //TODO: implement
}
