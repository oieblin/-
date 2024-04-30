#include "functions.hpp"
#include "menu.hpp"
#include <iostream>
#include <thread>

void menu() {
    createFolder();
    
 

    int choice;
    do {
        std::cout << "Меню:" << std::endl;
        std::cout << "1. Удалить файл" << std::endl;
        std::cout << "2. Восстановить файлы из корзины" << std::endl;
        std::cout << "3. Просмотреть содержимое корзины" << std::endl;
        std::cout << "4. Очистить корзину" << std::endl;
        std::cout << "0. Выход" << std::endl;
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string filename;
                std::cout << "Введите полный путь к файлу для удаления: ";
                std::cin.ignore();
                std::getline(std::cin, filename);
                moveToBasket(filename);
                break;
            }
            case 2: {
                returnFromBasket();
                break;
            }
            case 3: {
                displayBasket();
                break;
            }
            case 4: {
                clearBasket();
                break;
            }
            case 0: {
                std::cout << "Выход из программы." << std::endl;
                break;
            }
            default:
                std::cout << "Неверный ввод! Пожалуйста, выберите существующий пункт." << std::endl;
        }
    } while (choice != 0);
}
