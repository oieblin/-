#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

void createFolder();
void moveToBasket(const std::string& filename);
void returnFromBasket();
void clearBasket();
void displayBasket();


const std::string BASKET_FOLDER = "Users/ccufs/Desktop/bin";
#endif
