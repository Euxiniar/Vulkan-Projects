#pragma once

#include "vulkanProjectBase.h"

class VulkanProject : public VulkanProjectBase
{
public:
	VulkanProject();

private:
};

#if defined(_WIN32)
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow);
#endif