#include <windows.h>

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR	  lpCmdLine,
	int		  nCmdShow )
{
	const auto pClassName = L"HW3D";

	// 윈도우 클래스 생성 및 등록
	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof( wc );
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;

	RegisterClassEx( &wc );

	// 윈도우 생성
	HWND hWnd = CreateWindowEx(
		0, pClassName,
		L"HardWare 3D Huh",
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		200, 200, 640, 800,
		nullptr, nullptr, hInstance, nullptr
	);

	// 윈도우 출력
	ShowWindow( hWnd, SW_SHOW );
	while( true )
	{

	}

	return 0;
}
