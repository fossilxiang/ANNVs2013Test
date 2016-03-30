#pragma once
#include <vector>
///单个神经元（神经细胞）
class SNeuron
{
public:
	///构造函数，指示本神经元（细胞）有多少路输入
	SNeuron(int);
	~SNeuron();
	///进入神经细胞的输入个数，单个神经的输入个数
	int m_NumInputs;
	///每个神经元的输入权重
	std::vector<double> m_vecWeight;
};

