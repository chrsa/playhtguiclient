#pragma once
#include <Windows.h>

class LoginWindow
{

public:
	void create(HINSTANCE hInst, LPVOID data, WNDPROC proc);

	void setup(HWND hwnd);

	void show(int cmdshow);

	HWND handler() const;

	HWND userHandler() const;
	HWND passHandler() const;
	HWND okHandler() const;

private:
	static LRESULT CALLBACK GUIWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


	HWND window_;
	HWND user_;
	HWND pass_;
	HWND ok_;
};


