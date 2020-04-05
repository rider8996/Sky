#include <Sky.h>

class Playbox : public Sky::Application
{
public:
	Playbox() 
	{

	}

	~Playbox() 
	{

	}

};

Sky::Application* Sky::CreateApplication() 
{
	return new Playbox();
}