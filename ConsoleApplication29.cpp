#include <iostream>
#include <fstream>
using namespace std;
void stroka(string f, int o)
{
	ofstream out;
	out.open(f);
	if (out.is_open())
	{
		for (int i = 1; i < o; i++) {
			out << "" << i << endl;
		}
		out << "I like codding!" << endl;
	}

	cout << "printed on line " << o << endl;
	cout << "End of program" << endl;
	out.open("D:\\hello.txt");

}
int main()
{
	int line;
	cout << "Enter the line : ";
	cin >> line;
	string e = "D\\:hello.txt";
	stroka(e,line);
	
	return 0;
}
