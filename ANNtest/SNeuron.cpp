#include "stdafx.h"
#include "SNeuron.h"
#include <time.h>
#include <conio.h> 
//生成-1到1的随机值
double RandomClamped()
{	
	//clock_t t = clock();
	srand(clock());
	
	return (2.0 * ((double)rand() / (double)RAND_MAX) - 1.0);
	//return RAND_MAX;
}
SNeuron::SNeuron(int NumInputs) :m_NumInputs(NumInputs+1)
{
	for (int i = 0; i < NumInputs + 1; i++)
	{
		m_vecWeight.push_back(RandomClamped());
	}
}


SNeuron::~SNeuron()
{
}
