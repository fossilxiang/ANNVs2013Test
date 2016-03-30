// ANNtest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "SNeuron.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	SNeuron* sn = new SNeuron(3);
	cout << sn->m_NumInputs << endl;
	for (std::vector<double>::iterator it = sn->m_vecWeight.begin(); it != sn->m_vecWeight.end(); it++)
		cout << ' ' << *it;
	getchar();
	return 0;
}

