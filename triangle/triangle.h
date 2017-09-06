#pragma once

#include <Windows.h>

#include "vulkanProjectBase.h"

class VulkanProject : public VulkanProjectBase
{
public:
	VulkanProject();

private:
};

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow);
