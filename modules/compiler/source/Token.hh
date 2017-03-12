#ifndef TOKEN_HH
#define TOKEN_HH

#include <sstream>
#include <string>


class Token
{
	public:
		int id;
		int counter;
		std::string value;
		int line;
		int column;

		Token(
			int id,
			const std::string &value) : id(id), counter(0), value(value)
		{
		}

		operator std::string()
		{
			std::stringstream ss;
			ss << "[id: " << id << "; counter: " << counter << "; value: " << value << "]" << this;
			return ss.str();
		}
};


#endif // TOKEN_HH