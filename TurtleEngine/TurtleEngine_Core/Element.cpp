#pragma once
#include "pch.h"

#include "TurtleWindow.h"
#include "Element.h"
#include "Turtle2DMath.h"

#include <SFML/Graphics.hpp>

using namespace turtle::math;

namespace turtle
{
	namespace gui
	{
		StrShell<Element> Element::New()
		{
			return StrShare<Element>();
		}

		Element::Element()
		{
			Construct();
		}

		Element::~Element()
		{
			delete _background;
		}

		void Element::Construct()
		{
			_background = new sf::RectangleShape(sf::Vector2f(_sizeX, _sizeY));
			_background->setFillColor(sf::Color(100, 250, 50));
			LogErr("Contructing _background");
		}

		void Element::AddElement(const StrShell<Element> & element)
		{
			if (element)
			{
				element->SetWindowParent(_parentWindow);
				_elements.push_back(element);
			}

			RecalculateSize();

		}
		void Element::SetPosX(Int posX)
		{
			_posX = posX;
		}

		void Element::SetPosY(Int posY)
		{
			_posY = posY;
		}

		Int Element::GetPosX()
		{
			return Int();
		}
		Int Element::GetPosY()
		{
			return Int();
		}

		void Element::SetBackgroundColor(Byte r, Byte g, Byte b, Byte a)
		{
			_background->setFillColor(sf::Color(r, g, b, a));

		}

		void Element::SetBackgroundOutlineColor(Byte r, Byte g, Byte b, Byte a)
		{
			_background->setOutlineColor(sf::Color(r, g, b, a));
		}

		void Element::SetBackgroundOutlineTickness(Float tickness)
		{
			_background->setOutlineThickness(tickness);
		}

		void Element::SetSizeX(Float sizeX)
		{
			_sizeX = sizeX;
			RecalculateSize();
		}
		void Element::SetSizeY(Float sizeY)
		{
			_sizeY = sizeY;
			RecalculateSize();
		}

		void Element::SetSize(Float sizeX, Float sizeY)
		{
			_sizeY = sizeY;
			_sizeX = sizeX;
			RecalculateSize();
		}

		Double Element::GetSizeX()
		{
			return _sizeY;
		}

		Double Element::GetSizeY()
		{
			return _sizeY;
		}
		Float2 Element::GetAbsoluteSize()
		{
			auto x = _sizeX;
			auto y = _sizeY;

			if (x < 0)
			{
				x = GetParentAbsoluteSize()._x * std::abs(x);
			}

			if (y < 0)
			{
				y = GetParentAbsoluteSize()._y * std::abs(y);
			}

			return Float2(x, y);
		}
		void Element::SetVisibility(Bool status)
		{
			_isVisible = status;
		}

		void Element::Show()
		{
			_isVisible = true;
		}

		void Element::Hide()
		{
			_isVisible = false;
		}

		Bool Element::IsVisible()
		{
			return _isVisible;
		}

		void Element::SetName(const String & name)
		{
			_name = name;
		}

		Bool Element::CheckSelection(Int mouseX, Int mouseY)
		{
			return Math::IsInRectangle<Int>(_posX, _posY, static_cast<Int>(_sizeX), static_cast<Int>(_sizeY), mouseX, mouseY);
		}

		void Element::SetWindowParent(TurtleWindow * window)
		{
			_parentWindow = window;
		}

		void Element::Draw()
		{
			if (_parentWindow)
			{
				DrawInternal();
				_parentWindow->GetDrawer()->draw(*_background);

				for (const auto & element : _elements)
				{
					if (element)
					{
						element->Draw();
					}
				}
			}

		}

		void Element::DrawInternal()
		{
		}

		void Element::Update()
		{
			UpdateInternal();

			for (const auto & element : _elements)
			{
				if (element)
				{
					element->Update();
				}
			}
		}

		void Element::UpdateInternal()
		{
		}

		void Element::RecalculateSize()
		{
			auto x = _sizeX;
			auto y = _sizeY;

			if (x < 0)
			{
				x = GetParentAbsoluteSize()._x * std::abs(x);
			}

			if (y < 0)
			{
				y = GetParentAbsoluteSize()._y * std::abs(y);
			}

			LogInf("Final size of: " << _name << " is: " << x << " " << y);
			_background->setSize(sf::Vector2f(x, y));

			for (const auto & child : _elements)
			{
				child->RecalculateSize();
			}


		}

		Float2 Element::GetParentSize()
		{
			if (_parent)
			{	
				return Float2(_parent->_sizeX, _parent->_sizeY);
			}
			else
			{
				if (_parentWindow)
				{
					return _parentWindow->GetSize();
				}
			}
			return Float2(0, 0);
		}

		Float2 Element::GetParentAbsoluteSize()
		{
			if (_parent)
			{
				return _parent->GetAbsoluteSize();
			}
			else
			{
				if (_parentWindow)
				{
					return _parentWindow->GetSize();
				}
			}
			return Float2(0, 0);
		}

	}
}

