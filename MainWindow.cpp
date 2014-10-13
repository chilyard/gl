// MainWindow object.

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#endif

using namespace std;

class MainWindow
{
    public:
    MainWindow()
    {
        cout << "MainWindow constructor" << endl;
        sf::Window window;
        window.create(sf::VideoMode(800,600), "SFML window"); 

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
        }
    }

    ~MainWindow()
    {
        cout << "MainWindow deconstructor" << endl;
    }

};
