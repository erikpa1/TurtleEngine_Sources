#pragma once

namespace turtle
{
	template<class TYPE>
	class StrShell
	{

	private:
		TYPE * _data = nullptr;


	public:
		StrShell() = default;
		~StrShell() {
			if (IsNotNull())
			{
				_data->DecrementCount();
				_data = nullptr;
			}
		};


		StrShell(TYPE * ptr)
		{
			if (ptr != nullptr)
			{
				_data = ptr;
				_data->IncrementCount();
			}
		}

		inline TYPE * GetRaw()
		{
			return _data;
		};

		inline const bool IsNotNull()
		{
			return _data != nullptr;
		};


		inline const bool IsNull()
		{
			return _data == nullptr;
		};

		inline TYPE * operator->()
		{
			if (IsNotNull())
			{
				return _data;
			}
			else
			{
				throw std::exception("Invalid pointer");
			}
		}

		inline void operator=(TYPE * data)
		{
			if (data != nullptr)
			{
				if (IsNotNull())
				{
					_data->DecrementCount();
					_data = nullptr;
				}
				_data = data;
				_data->IncrementCount();
			}
			else
			{
				if (IsNotNull())
				{
					_data->DecrementCount();
					_data = nullptr;
				}
			}
		}

		inline void operator=(const StrShell<TYPE> & data)
		{
			if (data.IsNotNull())
			{
				if (IsNotNull())
				{
					_data->DecrementCount();
					_data = nullptr;
				}
				_data = data._data;
				_data->IncrementCount();
			}
			else
			{
				if (IsNotNull())
				{
					_data->DecrementCount();
					_data = nullptr;
				}
			}
		};



	};

}
