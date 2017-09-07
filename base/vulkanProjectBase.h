#pragma once

#if defined(_WIN32)
#include <Windows.h>
#endif

#include <vector>

class VulkanProjectBase
{
public:
	VulkanProjectBase();
	static std::vector<const char*> args;
#if defined(_WIN32)
	void handleEvents(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam); 
#endif
private:
};
