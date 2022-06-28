#include <sstream>
#include "D3DFramework.h"

void D3DFramework::CalculateFPS()
{
	static int frameCount{};
	static float timeElapsed{};

	frameCount++;
	if (mTimer.Totaltime() - timeElapsed >= 1.0f)
	{
		float fps = static_cast<float>(frameCount);
		float mspf = 1000.0f / fps;

		std::wostringstream	oss;

		oss.precision(6);
		oss << mTitleText << L"-"
			<< L"FPS : " << fps
			<< L", Frmae Time : " << mspf << L"(ms)";

		SetWindowText(mHwnd, oss.str().c_str()); 

		frameCount = 0;
		timeElapsed += 1.0f;
	}
}

void D3DFramework::InitWindow(HINSTANCE hInstance)
{
	WNDCLASSEX wc;

	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	mInstance = hInstance;

	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpszClassName = CLASSNAME.c_str(); 
	wc.hInstance = hInstance;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = 0;
}

void D3DFramework::InitD3D()
{
}

void D3DFramework::OnResize()
{
}

void D3DFramework::RenderFrame()
{
}

void D3DFramework::Destroy()
{
}

void D3DFramework::GameLoop()
{
}
