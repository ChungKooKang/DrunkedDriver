#pragma once

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <wrl/client.h>
#include <d3d11.h>
#include <string>
#pragma comment (lib, "d3d11.lib")

class D3DFramework
{
	const std::wstring CLASSNAME{ L"MyWindowClass" };
	const std::wstring TITLENAME{ L"Direct3D" };

protected :
	int mScreenWidth{ 800 };
	int mScreenHeight{ 600 };

	HWND mHwnd{};
	HINSTANCE mInstance{};

	// 창 화면 바꾸기
	bool mMinimized{ false };
	bool mMaximized{ false };
	bool mResizing{ false };

	// Timer
	bool mPaused{ false };
	
	
	
};

