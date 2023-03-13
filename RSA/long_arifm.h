#include <vector>
#include <iostream>
#include <string>
using namespace std;

class long_num
{

	private:

	public:
		vector<int> value;
		long_num()
		{
			string b;

			cout << "ввод числа : ";
			getline(cin, b);
			for (auto i : b)
			{
				value.push_back(int(i) - '0');
			}
		}

		void Print()
		{
			for (auto i : value)
			{
				cout << i;
			}
		}

};