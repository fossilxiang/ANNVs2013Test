#pragma once
#include <vector>
///������Ԫ����ϸ����
class SNeuron
{
public:
	///���캯����ָʾ����Ԫ��ϸ�����ж���·����
	SNeuron(int);
	~SNeuron();
	///������ϸ������������������񾭵��������
	int m_NumInputs;
	///ÿ����Ԫ������Ȩ��
	std::vector<double> m_vecWeight;
};

