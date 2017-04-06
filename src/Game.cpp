#include <Game.hpp>

Game::Game():
m_window(sf::VideoMode(800, 600),"Minimal RPG")
{
    m_player.setX(10);
    m_player.setY(10);
}

void Game::run()
{
    sf::Clock clock;

    while (m_window.isOpen())
    {
        handleEvent();
        update(clock.restart());
        //render();
    }

}

void Game::handleEvent()
{
    sf::Event event;

    while (m_window.isOpen())
    {
        while (m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                m_window.close();
            else if(event.type == sf::Event::KeyPressed)
            {
                if(event.key.code == sf::Keyboard::W){
                    m_player.setY(m_player.getY() - 10);
                }
                else if(event.key.code == sf::Keyboard::S){
                    m_player.setY(m_player.getY() + 10);
                }
                else if(event.key.code == sf::Keyboard::D){
                    m_player.setX(m_player.getX() + 10);
                }
                else if(event.key.code == sf::Keyboard::A){
                    m_player.setX(m_player.getX() - 10);
                }
            }
        }
        m_window.clear();
        m_window.draw(m_player);
        m_window.display();
    }

}

void Game::update(sf::Time deltaTime)
{

}