#pragma once
#include "Skeleton.h"
#include <SFML/Graphics.hpp>

using sf::Color;
using sf::CircleShape;
using sf::Vector2f;
using sf::RenderWindow;

class Lamp
{

public:

	// ����������� �������� 
	Lamp(RenderWindow& window, float radius, Vector2f position);

	// ���������� ���� ��������
	void setColor(Color colorBackground, Color colorBorder);

	// ��������� �������� �� ��������� �������
	void setPosition(const Vector2f& position);

	// ���������� ��������
	void Draw();

	// �������� ������� ��������
	Vector2f getPosition() const;

private:

	CircleShape circle;
	RenderWindow& window;

};