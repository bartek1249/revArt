/*

;		Win32.revArt '
;	made by nquantum '
; copyright	2021     '
;
; do not redistribute.

*/


#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <thread>

#include <gdiplus.h>

#define BitBlyat BitBlt
#define DLLEXPORT __declspec(dllexport)
#define HBRUH HBRUSH
DWORD state;

HWND upWnd = GetForegroundWindow();
HDC upHdc = GetDC(upWnd);
HDC scr = GetDC(NULL);
int xs = GetSystemMetrics(SM_CXSCREEN);
int ys = GetSystemMetrics(SM_CYSCREEN);
int xm = GetSystemMetrics(SM_CXFULLSCREEN);
int runtime = 0;

void xword()
{
	HDC hDC = GetDC(NULL);
	upWnd = GetForegroundWindow();
	upHdc = GetDC(upWnd);
	scr = GetDC(NULL);
	HWND hWnd = GetForegroundWindow();

	BitBlyat(scr, 1, 7, xs, xs, GetDC(NULL), 4, 7, SRCINVERT);
	Sleep(6000);
	ReleaseDC(hWnd, NULL);
}

DLLEXPORT DWORD rng() {
	state ^= state >> 7;
	HDC dc = GetDC(NULL);
	state ^= (DWORD)dc * 11;
	ReleaseDC(NULL, dc);
	return state;
}


void snd() {
	
	/*
	int exception = 0;

	
	// PlaySound(TEXT("audio.wav"), NULL, SND_SYNC);
	
	
	

	int randNum = rand() % (10 - 10000 + 1) + 10;
	
	int randNum2 = rand() % (10 - 10000 + 1) + 10;
	int randNum3 = rand() % (10 - 10000 + 1) + 10;
	
	std::thread obj(xword);

	
	// Beep(10000, 6000);
	
	for (int i = 0; i < 69; i++) {

		//PlaySound(TEXT("audio.wav"), NULL, SND_SYNC);
	}*/
	
}



int Zormelt()
{

	#pragma region  defs


			ShowWindow(GetConsoleWindow(), SW_HIDE);
			HDC hScreen;
			RECT scRect;
			GetWindowRect(GetDesktopWindow(), &scRect);
			DWORD dwCTR = 0;
			DWORD dwSmegma = 0;
			RECT RectangleR;

			DWORD dwRannum = rng();
			HWND upWnd = GetForegroundWindow();
			HDC upHdc = GetDC(upWnd);
			HDC scr = GetDC(NULL);
			int xs = GetSystemMetrics(SM_CXSCREEN);
			int ys = GetSystemMetrics(SM_CYSCREEN);

			std::thread thread_obj(snd);
			
		#pragma endregion

	Sleep(30000);
	RedrawWindow(upWnd, 0, 0, 133);
	while (true)
	{
		HDC hDC = GetDC(NULL);
		upWnd = GetForegroundWindow();
		upHdc = GetDC(upWnd);
		scr = GetDC(NULL);
		hScreen = GetDC(NULL);

		
		StretchBlt(hScreen, scRect.left + 50 + (dwRannum % 400) / 2, scRect.top + 50 + (dwRannum % 400) / 2, scRect.right - 100 - (dwRannum % 400), scRect.bottom - 100 - (dwRannum % 400), hScreen, scRect.left, scRect.top, scRect.right, scRect.bottom, 0x333333);
		Sleep(10);
	}	

	return 0;
}

int Vormelt() {

	#pragma region defs1


		ShowWindow(GetConsoleWindow(), SW_HIDE);
		HDC hScreen;
		RECT scRect;
		GetWindowRect(GetDesktopWindow(), &scRect);
		DWORD dwCTR = 0;
		DWORD dwSmegma = 0;
		RECT RectangleR;

		DWORD dwRannum = rng();
		HWND upWnd = GetForegroundWindow();
		HDC upHdc = GetDC(upWnd);
		HDC scr = GetDC(NULL);
		int xs = GetSystemMetrics(SM_CXSCREEN);
		int ys = GetSystemMetrics(SM_CYSCREEN);

		std::thread thread_obj(snd);
		
	#pragma endregion

	Sleep(5000);

	while (true)
	{
		HDC hDC = GetDC(NULL);
		upWnd = GetForegroundWindow();
		upHdc = GetDC(upWnd);
		scr = GetDC(NULL);
		hScreen = GetDC(NULL);

		BitBlt(hDC, 0, 0, xs, ys, GetDC(NULL), 0, 0, SRCCOPY);
		BitBlt(hDC, 1 + (INT)(((INT)rng() % 4) - 2), 1 + (INT)(((INT)rng() % 4) - 2), scRect.right + (INT)(((INT)rng() % 4) - 2), scRect.bottom + (INT)(((INT)rng() % 4) - 2), hDC, 1, 1, NOTSRCERASE);
		Sleep(100);
	}

	return 0;
}

int Cormelt()
{
#pragma region defs2


	ShowWindow(GetConsoleWindow(), SW_HIDE);
	HDC hScreen;
	RECT scRect;
	GetWindowRect(GetDesktopWindow(), &scRect);
	DWORD dwCTR = 0;
	DWORD dwSmegma = 0;
	RECT RectangleR;

	DWORD dwRannum = rng();
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC scr = GetDC(NULL);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);

	std::thread thread_obj(snd);
	
#pragma endregion


	

	

	while (true)
	{
		HDC hDC = GetDC(NULL);
		upWnd = GetForegroundWindow();
		upHdc = GetDC(upWnd);
		scr = GetDC(NULL);
		hScreen = GetDC(NULL);

		int randCol = rand() % (1 - 254);
		int randCol1 = rand() % (1 - 254);
		int randCol2 = rand() % (1 - 254);

		HBRUH hBruh = CreateSolidBrush(RGB(randCol, randCol1, randCol2));
		
		SelectObject(scr, hBruh);
		PatBlt(scr, 0, 0, xs, ys, PATINVERT);

		BitBlt(scr, 0, 0, xs, ys, GetDC(HWND_DESKTOP), 0, 0, SRCCOPY);
		ReleaseDC(upWnd, scr);
		ReleaseDC(HWND_DESKTOP, GetDC(HWND_DESKTOP));

		HDC Window = GetDC(upWnd);
		int x = (rand() % xs) - (150 / 2);
		int y = (rand() % 15);
		int w = (rand() % 150);
		BitBlt(Window, x, y, w, ys, Window, x, 0, SRCCOPY);
		
		SelectObject(scr, hBruh);
		PatBlt(scr, 0, 0, xs, ys, PATINVERT);
		Sleep(10);		
	}

	return 0;
}

int Hormelt()
{
#pragma region defs3



	ShowWindow(GetConsoleWindow(), SW_HIDE);
	HDC hScreen;
	RECT scRect;
	GetWindowRect(GetDesktopWindow(), &scRect);
	DWORD dwCTR = 0;
	DWORD dwSmegma = 0;
	RECT RectangleR;

	DWORD dwRannum = rng();
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC scr = GetDC(NULL);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);

	std::thread thread_obj(snd);

#pragma endregion


	Sleep(40000);

	HDC hDC = GetDC(NULL);
	upWnd = GetForegroundWindow();
	upHdc = GetDC(upWnd);
	scr = GetDC(NULL);
	hScreen = GetDC(NULL);

	int randCol = rand() % (1 - 254);
	int randCol1 = rand() % (1 - 254);
	int randCol2 = rand() % (1 - 254);

	

	while (true)
	{
		


		HWND hWnd = GetForegroundWindow();

		int X = (rand() % xs) - (950 / 2),
			Y = (rand() % 900),
			Width = (rand() % 350);

		int randWhereX = rand() % (0 - 1920);
		int randWhereY = rand() % (0 - 1080);
		int randHow = rand() % (0 - 1080);


		HBRUH hBruh = CreateSolidBrush(RGB(randCol, randCol1, randCol2));

		SelectObject(scr, hBruh);
		

		PatBlt(scr, randWhereX, randWhereY, X, Y, PATINVERT);
		Sleep(5);



	}

	return 0;
}


int Formelt()
{
#pragma region defs3



	ShowWindow(GetConsoleWindow(), SW_HIDE);
	HDC hScreen;
	RECT scRect;
	GetWindowRect(GetDesktopWindow(), &scRect);
	DWORD dwCTR = 0;
	DWORD dwSmegma = 0;
	RECT RectangleR;

	DWORD dwRannum = rng();
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC scr = GetDC(NULL);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);
	int min = -1000;
	int max = 1100;
	int randNum = rand() % (max - min + 1) + min;
	int randNum2 = rand() % (299 - 423 + 1) + min;
	int randNum1 = rand() % (max - min + 1) + min;
	int randNum3 = rand() % (max - min + 1) + min;
	int randNum4 = rand() % (1080 - 1920 + 1) + min;

	std::thread thread_obj(snd);

#pragma endregion


	Sleep(60000);





	while (true)
	{
		HDC hDC = GetDC(NULL);
		upWnd = GetForegroundWindow();
		upHdc = GetDC(upWnd);
		scr = GetDC(NULL);
		hScreen = GetDC(NULL);

		int randCol = rand() % (1 - 254);
		int randCol1 = rand() % (1 - 254);
		int randCol2 = rand() % (1 - 254);


		HWND hWnd = GetForegroundWindow();

		int X = (rand() % xs) - (950 / 2),
			Y = (rand() % 900),
			Width = (rand() % 350);

		int randWhereX = rand() % (0 - 1920);
		int randWhereY = rand() % (0 - 1080);
		int randHow = rand() % (0 - 1080);


		// A color part
		 PatBlt(scr, randNum, randNum3, randNum4, randNum4, 0x00F293B);

		// some funky thingy
		StretchBlt(scr, 1, 7, xs, xs, GetDC(NULL), 10, 10, 10, 10, SRCINVERT);

		// Blyats the screen "ghosting"					(INT) +}{
		 BitBlt(hDC, 1 + (INT)(((INT)rng() % 4) - 2), 1 + (INT)(((INT)rng() % 4) - 2), scRect.right + (INT)(((INT)rng() % 4) - 2), scRect.bottom + (INT)(((INT)rng() % 4) - 2), hDC, 1, 1, NOTSRCERASE);

		// funky part
		//BitBlt(hScreen, scRect.left + 5, scRect.top + 5, scRect.right + 5, scRect.bottom + 5, hScreen, scRect.left, scRect.top, SRCPAINT);
		//StretchBlt(hScreen, scRect.left, scRect.top, scRect.right / 3, scRect.bottom / 3, hScreen, scRect.left, scRect.top, scRect.right / 2, scRect.bottom / 2, SRCCOPY);
		//StretchBlt(hScreen, (scRect.right / 3) * 2, (scRect.bottom / 3) * 2, scRect.right, scRect.bottom, hScreen, scRect.right / 2, scRect.bottom / 2, scRect.right, scRect.bottom, SRCCOPY);



		// Making screen "tunneling"
	    StretchBlt(hScreen, scRect.left + 50 + (dwRannum % 400) / 2, scRect.top + 50 + (dwRannum % 400) / 2, scRect.right - 100 - (dwRannum % 400), scRect.bottom - 100 - (dwRannum % 400), hScreen, scRect.left, scRect.top, scRect.right, scRect.bottom, 0x333333);

		// Inverts some thingy and makes that more funky
		BitBlyat(scr, 1, 7, xs, xs, GetDC(NULL), 4, 7, SRCINVERT);

		ReleaseDC(NULL, hScreen);
		ReleaseDC(upWnd, hScreen);
		Sleep(5);



	}

	return 0;
}

void HandleMSGBOX()
{
	HWND hWnd = GetForegroundWindow();
	MessageBoxA(hWnd, "Win32.revArt | made by nquantum, intException, gabrik and more. | Have fun! :d", "Win32.revArt", MB_ICONINFORMATION | MB_OK);
}


int main()

{
	int min = -1000;
	int max = 1100;

	int randNum = rand() % (max - min + 1) + min;
	int randNum2 = rand() % (299 - 423 + 1) + min;
	int randNum1 = rand() % (max - min + 1) + min;
	int randNum3 = rand() % (max - min + 1) + min;
	int randNum4 = rand() % (1080 - 1920 + 1) + min;
	
	int randCol = rand() % (1 - 254 + 1) + min;
	int randCol1 = rand() % (1 - 254 + 1) + min;
	int randCol2 = rand() % (1 - 254 + 1) + min;


	ShowWindow(GetConsoleWindow(), SW_HIDE);
	HandleMSGBOX();
	Sleep(700);
	
	
	HDC hScreen;
	RECT scRect;
	GetWindowRect(GetDesktopWindow(), &scRect);
	DWORD dwCTR = 0;
	DWORD dwSmegma = 0;
	RECT RectangleR;

	DWORD dwRannum = rng();
	HWND upWnd = GetForegroundWindow();
	HDC upHdc = GetDC(upWnd);
	HDC scr = GetDC(NULL);
	int xs = GetSystemMetrics(SM_CXSCREEN);
	int ys = GetSystemMetrics(SM_CYSCREEN);


	HDC hDC = GetDC(NULL);
	upWnd = GetForegroundWindow();
	upHdc = GetDC(upWnd);
	scr = GetDC(NULL);
	hScreen = GetDC(NULL);


	INPUT input;

	/*

	BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 10, 10, NOTSRCCOPY);
	BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 10, 10, NOTSRCCOPY);

	Sleep(1200);

	BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 10, 10, NOTSRCCOPY);
	BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 10, 10, NOTSRCCOPY);
	
	Sleep(2000);
	
	
		BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 10, 10, NOTSRCCOPY);
	

	Sleep(3000);
	BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 10, 10, NOTSRCCOPY);
	
	*/
	std::thread thread_obj(snd);
	
	
	std::thread thrd1(Vormelt);
	std::thread thrd2(Zormelt);
	std::thread thrd3(Cormelt);
	std::thread thrd4(Hormelt);
	std::thread thrd5(Formelt);
	
	// old payload
	while (true)
	{
		
		//BitBlyat(desktop, -10, -10, xs, ys, GetDC(NULL), 10, 10, SRCCOPY);
		
		

		

		/*

		HWND hWnd = GetForegroundWindow();

		int X = (rand() % xs) - (950 / 2),
			Y = (rand() % 900),
			Width = (rand() % 350);

		int randWhereX = rand() % (0 - 1920);
		int randWhereY = rand() % (0 - 1080);
		int randHow = rand() % (0 - 1080);
		
		
		HBRUH hBruh = CreateSolidBrush(RGB(randCol, randCol1, randCol2));
		
		SelectObject(scr, hBruh);

		PatBlt(scr, randWhereX, randWhereY, X, Y, PATINVERT);
		
		*/
		
		

		// PatBlt(scr, randWhereX, randWhereY, Y, X, PATINVERT);
		
		/*

		BitBlt(scr, 0, 0, xs, ys, GetDC(HWND_DESKTOP), 0, 0, NOTSRCCOPY);
		ReleaseDC(hWnd, scr);
		ReleaseDC(HWND_DESKTOP, GetDC(HWND_DESKTOP));

		HDC Window = GetDC(hWnd);
		int X = (rand() % xs) - (350 / 2),
			Y = (rand() % 15),
			Width = (rand() % 350);
		BitBlt(Window, X, Y, Width, ys, Window, X, 0, NOTSRCCOPY);

		*/


		// BitBlyat(scr, 10, 10, xs, xs, GetDC(NULL), 1, 11, SRCINVERT);

		// A color part
		 //PatBlt(scr, randNum, randNum3, randNum4, randNum4, 0x00F293B);
		
		// some funky thingy
		//StretchBlt(scr, 1, 7, xs, xs, GetDC(NULL), 10, 10, 10, 10, SRCINVERT);
		
		// Blyats the screen "ghosting"					(INT) +}{
		// BitBlt(hDC, 1 + (INT)(((INT)rng() % 4) - 2), 1 + (INT)(((INT)rng() % 4) - 2), scRect.right + (INT)(((INT)rng() % 4) - 2), scRect.bottom + (INT)(((INT)rng() % 4) - 2), hDC, 1, 1, NOTSRCERASE);
		
		// funky part
		//BitBlt(hScreen, scRect.left + 5, scRect.top + 5, scRect.right + 5, scRect.bottom + 5, hScreen, scRect.left, scRect.top, SRCPAINT);
		//StretchBlt(hScreen, scRect.left, scRect.top, scRect.right / 3, scRect.bottom / 3, hScreen, scRect.left, scRect.top, scRect.right / 2, scRect.bottom / 2, SRCCOPY);
		//StretchBlt(hScreen, (scRect.right / 3) * 2, (scRect.bottom / 3) * 2, scRect.right, scRect.bottom, hScreen, scRect.right / 2, scRect.bottom / 2, scRect.right, scRect.bottom, SRCCOPY);
		


		// Making screen "tunneling"
	   // StretchBlt(hScreen, scRect.left + 50 + (dwRannum % 400) / 2, scRect.top + 50 + (dwRannum % 400) / 2, scRect.right - 100 - (dwRannum % 400), scRect.bottom - 100 - (dwRannum % 400), hScreen, scRect.left, scRect.top, scRect.right, scRect.bottom, 0x333333);
		
		// Inverts some thingy and makes that more funky
		//BitBlyat(scr, 1, 7, xs, xs, GetDC(NULL), 4, 7, SRCINVERT);
		
	    ReleaseDC(NULL, hScreen);
		ReleaseDC(upWnd, hScreen);
		Sleep(5);
		

		// BitBlt(scr, 10, 10, xs = rand() % 9 - 4, ys = rand() % 9 - 4, GetDC(NULL), 10, 10, SRCCOPY);
		
		// BitBlt(scr, -10, -10, xs, ys, GetDC(NULL), 10, 10, 0x999999);
		
		
	}

	
}


