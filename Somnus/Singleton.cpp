#include "stdafx.h"
#include "Singleton.h"
using namespace Somnus::Core;

template <typename T>
void Singleton<T>::CreateSingleton()
{
	if (m_instance == NULL)
		m_instance = T();
}

template <typename T>
Singleton<T>::Singleton()
{
	if (m_instance != NULL)
		throw new std::exception("�����ڳ����ظ�����һ���µ�Singleton������ͨ������Instance���ʣ�");
}

template <typename T>
T& Singleton<T>::GetInstance()
{
	return static_cast<T&>(m_instance);
}

