#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <sstream>
#include <string>
using namespace std;

int main() {
	time_t timer;
	struct tm *t;

	timer = time(NULL);

	t = localtime(&timer);

	cout << t->tm_year + 1900 << "��" << endl;
	cout << t->tm_mon + 1 << "��" << endl;
	cout << t->tm_mday << "��" << endl;
	cout << t->tm_hour << "��" << endl;
	cout << t->tm_min << "��" << endl;
	cout << t->tm_sec << "��" << endl;

	string titleName;
	cout << "������ �Է��ϼ��� :"; cin >> titleName;

	stringstream ss;
	ss << t->tm_year + 1900 << "-";

	if( t->tm_mon+1 < 10 ) ss << "0";
	ss << t->tm_mon+1 << "-";

	if( t->tm_mday < 10 ) ss << "0";
	ss << t->tm_mday;

	// ��¥�ϼ�

	stringstream ss2;
	ss2 << ss.str() << " " << t->tm_hour << ":" << t->tm_sec << " +0900";


	stringstream titles;
	titles << ss.str() << "-" << titleName << ".markdown";
	
	ofstream fout(titles.str());
	fout << "---  \n";
	fout << "layout: entry  \n";
	fout << "title : \"" + titleName + "\"  \n";
	fout << "author: ������  \n";
	fout << "date: " << ss2.str() << "  \n" << endl;
	fout << "tags: NULL  \n";
	fout << "comments: true  \n";
	fout << "---  \n\n";
	//fout.close();
}
