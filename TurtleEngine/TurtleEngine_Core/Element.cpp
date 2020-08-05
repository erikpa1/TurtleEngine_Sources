#pragma once
#include "pch.h"
#include "TurtleObject.h"

#include "Element.h"

#include "Turtle2DMath.h"

using namespace turtle::math;

namespace turtle
{
	namespace gui
	{
		StrShell<Element> Element::New()
		{
			return StrShell<Element>(new Element);
		}
		void Element::AddElement(const StrShell<Element> & element)
		{
			//_elements.push_back(element);
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

		void Element::SetSizeX(Int sizeX)
		{
			_sizeX = sizeX;
		}
		void Element::SetSizeY(Int sizeY)
		{
			_sizeY = sizeY;
		}

		Double Element::GetSizeX()
		{
			return _sizeY;
		}

		Double Element::GetSizeY()
		{
			return _sizeY;
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

		Bool Element::CheckSelection(Int mouseX, Int mouseY)
		{
			return Math::IsInRectangle<Int>(_posX, _posY, static_cast<Int>(_sizeX), static_cast<Int>(_sizeY), mouseX, mouseY);
		}

		void Element::Draw()
		{

		}

		void Element::Update()
		{

		}

	}
}

