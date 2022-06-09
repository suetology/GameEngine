#pragma once

#include "hzpch.h"

#include "Core.h"
#include "Events/Event.h"

namespace Hazel
{
	struct WindowProps
	{
		std::string Title;
		unsigned int Width, Height;

		WindowProps(const std::string& title = "Hazel Engine", unsigned int width = 1280, unsigned int height = 720)
			: Title(title), Width(width), Height(height) { }
	};

	class HAZEL_API Window
	{
	public:
		using EventCallbackFunc = std::function<void(Event&)>;
		
		virtual ~Window() {}

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidht() const = 0;
		virtual unsigned int GetHeight() const = 0;

		virtual void SetEventCallback(const EventCallbackFunc& callback) = 0;
		virtual	void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		static Window* Create(const WindowProps& props = WindowProps());
	};
}