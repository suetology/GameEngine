#pragma once

#include "Hazel/Core.h"
#include "Hazel/Layer.h"

#include "Hazel/Events/MouseEvent.h"

namespace Hazel
{
	class HAZEL_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer();

		void OnAttach() override;
		void OnDetach() override;
		void OnUpdate() override;
		void OnEvent(Event& event) override;

	private:
		float m_Time = 0.0f;

		void OnMouseButtonPressedEvent(MouseButtonPressedEvent& event);
		void OnMouseButtonReleasedEvent(MouseButtonReleasedEvent& event);
		void OnMouseMovedEvent(MouseMovedEvent& event);
		void OnMouseScrolledEvent(MouseScrolledEvent& event);
		void OnMouseButtonPressedEvent(MouseButtonPressedEvent& event);
		void OnMouseButtonPressedEvent(MouseButtonPressedEvent& event);
		void OnMouseButtonPressedEvent(MouseButtonPressedEvent& event);
	};
}