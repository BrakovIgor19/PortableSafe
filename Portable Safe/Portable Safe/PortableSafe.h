#pragma once
#include "Object.h"
#include <SFML/Graphics.hpp>
#include <vector>
#include "Skeleton.h"
#include "Lamp.h"
#include "Palette.h"

using sf::Vector2i;
using std::vector;
using sf::RenderWindow;
using sf::RectangleShape;
using sf::WindowHandle;

class PortableSafe : public Object
{
public:
	// ������� ���������� ���� � ����
	explicit PortableSafe(RenderWindow& window, Vector2f sizes = { 300.f, 550.f }, Vector2f position = {0.f, 0.f}, bool padlock = false);
	explicit PortableSafe(RenderWindow& window, Vector2f sizes, Vector2f position, vector<int> password);

	// �������� ������� �� ��������� � ������� �����
	virtual bool isArea(const Vector2f& position) const override;

	// ����� ��������� ����� � ������� �����
	virtual Vector2f getAreaLocalePosition(const Vector2f& position) const override;

	// ��������� ����
	void setPosition(const Vector2f& position);

	// �������� ������� �����
	Vector2f getPosition();

	// �������� ������� �����
	Vector2f getSize();

private:
	bool padlock;
	float left;
	float right;
	float top;
	float bottom;
	Skeleton scelet;
	RenderWindow& window;
	Vector2f sizes;
	Lamp lampPadlock;
	RectangleShape clearRectangle;
	RectangleShape backgroundRectangle;
	vector<int> password;
	void Update();
	void setCoord(const Vector2f& position);
	
};