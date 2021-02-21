#include <windows.h>

LRESULT CALLBACK WndProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
	switch( msg )
	{
	case WM_CLOSE:
		PostQuitMessage( -3 );
		break;
	}
	return DefWindowProc( hWnd, msg, wParam, lParam );
}

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
	wc.lpfnWndProc = WndProc;
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
		200, 200, 800, 640,
		nullptr, nullptr, hInstance, nullptr
	);

	// 윈도우 출력
	ShowWindow( hWnd, SW_SHOW );

	// 메시지 받기
	MSG msg;
	BOOL gResult;
	while( (gResult = GetMessage( &msg, nullptr, 0, 0 )) > 0)
	{
		TranslateMessage( &msg );
		DispatchMessage( &msg );
	}

	if( gResult == -1 )
	{
		return -1;
	}
	else
	{
		return msg.wParam;
	}
}
