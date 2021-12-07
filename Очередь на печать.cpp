#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	queue<int> qw;
	string command;
	int value;
	int print;
	int oper;
	while (command != "PRINT+" || command != "PRINT-") {
		cout << "Enter command > ";
		cin >> command;
		cin >> value;
		qw.push(value);
	}
	if (command == "PRINT+" || command == "PRINT-")
	{
		cin >> oper;
	}
	cout << qw.size();
	if (qw.size() != 0) {
		int i = 0;
		cout << "Data: ";
		if (command == "PRINT+")
		{
			while (i = qw.size())
			{
				cout << qw.front() + oper << "/";
				qw.pop();
			}
		}
		if (command =="PRINT-")
		{
			while (i = qw.size())
			{
				cout << qw.front() - oper << "/";
				qw.pop();
			}
		}
	}
	else
	{
		cout << "DATA: EMPTY";
	}
} /*while (command != "END");*/