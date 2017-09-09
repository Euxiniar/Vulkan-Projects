#include "triangle.h"

#include <memory>

VulkanProject::VulkanProject() : VulkanProjectBase()
{
}

#if defined(_WIN32)

std::shared_ptr<VulkanProject> vulkanProject;
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{	
	if (vulkanProject != NULL)
	{
		vulkanProject->handleEvents(hWnd, uMsg, wParam, lParam);
	}
	return (DefWindowProc(hWnd, uMsg, wParam, lParam));
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow)
{
	for (size_t i = 0; i < __argc; i++)
	{
		VulkanProject::args.push_back(__argv[i]);
	}

	vulkanProject = std::make_shared<VulkanProject>(VulkanProject());
	vulkanProject->window.setupWindow(hInstance, WndProc, vulkanProject->name);
	return 0;
}

#elif defined(__linux__)

#endif
