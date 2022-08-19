#pragma once
#include <SFML/Graphics.hpp>

using sf::Vector2f;

class Object {

	// ��������� �������� �� ������� � ������� �������
	virtual bool isArea(const Vector2f& position) const = 0;

	// ����� ��������� ����� � ������� �������
	virtual Vector2f getAreaLocalePosition(const Vector2f& position) const = 0;
};