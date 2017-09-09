#include "vulkanProjectBase.h"

std::vector<const char*> VulkanProjectBase::args;


VulkanProjectBase::VulkanProjectBase() : window(*this)
{
	for (size_t i = 0; i < args.size(); i++)
	{
		if (args[i] == std::string("-hello")) {
			std::string msg("Hello Guy");
			MessageBox(NULL, msg.c_str(), "Hello !", MB_OK | MB_ICONINFORMATION);
		}
	}
}

void VulkanProjectBase::handleEvents(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		//Different instructions according to the events
	default:
		break;
	}
}
