#ifndef SINGLETON_H_
#define SINGLETON_H_
namespace Somnus
{
	namespace Core
	{
		//singleton design pattern
		template <typename T> class Singleton
		{
		protected:
			Singleton();
			static T m_instance;
		public:
			//create the Singleton
			static void CreateSingleton();
			static T& GetInstance();
			virtual ~Singleton() = default;
		}; 
	}
}
#endif