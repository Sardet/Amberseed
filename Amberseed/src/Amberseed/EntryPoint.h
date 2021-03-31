#pragma once

#ifdef AS_PLATFORM_WINDOWS

extern Amberseed::Application* Amberseed::CreateApplication();

int main(int argc, char** argv) {
	auto app = Amberseed::CreateApplication();
	app->Run();
	delete app;
}

#endif