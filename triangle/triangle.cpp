#include "triangle.h"

#include <memory>

#define ENABLE_VSYNC true

VulkanProject::VulkanProject() : VulkanProjectBase()
{
}

#if defined(_WIN32)

std::shared_ptr<VulkanProject> vulkanProject(new VulkanProject());
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{	
	if (vulkanProject != NULL)
	{
		
	}
	return (DefWindowProc(hWnd, uMsg, wParam, lParam));
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
	return 0;
}

#elif defined(__linux__)

#endif
