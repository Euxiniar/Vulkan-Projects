#pragma once
#if defined(_WIN32)
#include <Windows.h>
#endif
#include <string>
#include <iostream>

class VulkanProjectBase;

class Window
{
public:
	Window(VulkanProjectBase &project);
#if defined(_WIN32)
	HWND window;
	HINSTANCE windowInstance;
	HWND setupWindow(HINSTANCE hinstance, WNDPROC wndproc, std::string name);
#endif
};