#include <Amber.h>

class Sandbox : public Amberseed::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Amberseed::Application* Amberseed::CreateApplication() {
	return new Sandbox();
}