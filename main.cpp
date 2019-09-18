#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{
	/*vector<int> a = { 0,1,1,2 };
	vector<int> b = { 0,9,1,2,3,5,8 };
	int t = a.size() >= b.size() ? b.size(): a.size();
	for (int i = 0; i != t ; ++i)
	{
		if (a[i] == b[i])
		{
			if (i != t - 1)
				continue;
			else
				cout << "match" << endl;
		}

		else
			cout << "not match" << endl;
		break;
	}
	*/

	/*string a, b;
	do
	{

		cin >> a >> b;
		if (a.size() > b.size())
		{
			cout << b << endl;
		}
		else
			cout << a << endl;

	} while (cin);*/

	/*string repeat_string = "\0", before_string = "\0";
	while (cin >> repeat_string)
	{
		if (repeat_string == before_string)
		{
			if (repeat_string[0] >= 'A'&&repeat_string[0] <= 'Z')
			{
				cout << before_string << endl;
				break;
			}
			else
				continue;

		}
		else
			before_string = repeat_string;

	}*/
	int a, b;

	while (cin >> a >> b)
		try {
		if (b == 0)
			throw runtime_error("please do not input 0");
		cout << (a / b) << endl;
	}
	catch (runtime_error err)
	{
		cout << err.what() << endl << "how about try again? entry'n'or'y' " << endl;
		char c;
		cin >> c;
		if (!cin || c == 'n')
			break;
	}
	
	system("pause");


	return 0;
}