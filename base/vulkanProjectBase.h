#pragma once

#if defined(_WIN32)
#include <Windows.h>
#endif

#include <vector>
#include "window.h"

class VulkanProjectBase
{
public:
	VulkanProjectBase();
	static std::vector<const char*> args;

	std::string title = "Vulkan Example";
	std::string name = "Vulkan Example";

#if defined(_WIN32)
	Window window;
	void handleEvents(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam); 
	
#endif
private:
};
