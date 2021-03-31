#pragma once
#include "core.h"

namespace Amberseed {

	class AMBER_API Application {
	public:

		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined later on by client
	Amberseed::Application* CreateApplication();
}
