#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <Player.hpp>

class Game
{
    public:
        Game();
        //~Game();

        void run();
        void handleEvent();
        void update(sf::Time deltaTime);

    private:

        sf::RenderWindow m_window;
        Player m_player;


};

#endif // GAME_H