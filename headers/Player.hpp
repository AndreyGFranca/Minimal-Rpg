#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player : public sf::Drawable
{
    public:
        Player();
        //~Player();
        
        void setX(float x) { m_x = x; m_sprite.setPosition(m_x, m_y); }
        float getX() const { return m_x; }
        void setY(float y) { m_y = y; m_sprite.setPosition(m_x, m_y); }
        float getY() const { return m_y;}

    private:
        sf::CircleShape m_sprite;
        float m_x;
        float m_y;

        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};


#endif // PLAYER_H