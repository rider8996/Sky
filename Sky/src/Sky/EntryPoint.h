#pragma once

#ifdef SY_PLATFORM_WINDOWS

extern Sky::Application* Sky::CreateApplication();

int main(int argc, char** argv)
{
	printf("Sky Engine\n");
	auto app = Sky::CreateApplication();
	app->Run();
	delete app;
}

#endif