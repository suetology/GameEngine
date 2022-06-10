#pragma once

#include "Core.h"
#include "Window.h"

#include "Hazel/Events/ApplicationEvent.h"

namespace Hazel	
{ 
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& event);
	private:
		bool OnWindowClose(WindowCloseEvent& event);

		std::unique_ptr<Window> m_Window;
		bool m_Running;
	};

	Application* CreateApplication();	
}

