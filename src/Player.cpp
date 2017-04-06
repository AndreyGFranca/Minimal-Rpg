#include <Player.hpp>

Player::Player()
{
    m_x = 10; m_y = 10;
    m_sprite.setRadius(10);
    m_sprite.setOutlineColor(sf::Color::Red);
    m_sprite.setOutlineThickness(5);
    m_sprite.setPosition(m_x, m_y);
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const 
{
    target.draw(m_sprite, states);
} 

