#pragma once

#include <string>
#include <iostream>

class Person
{
	public:
		Person(const std::string& str)
			:m_str(str),count(0)
		{
		}
		~Person()
		{
		}

		void DisplayStr()
		{
			using std::cout;
			cout << "Name : " << m_str << '\n';
		}

	private:
		std::string m_str;
		int count;
};
