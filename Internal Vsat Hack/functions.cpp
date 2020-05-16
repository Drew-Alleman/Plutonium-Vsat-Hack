#pragma once
#include "addresses.h"
#include "functions.h"
#include <iostream>

using namespace addresses;

void functions::EnableConsole() {
	FILE* consoleOut = nullptr;
	FILE* consoleInt = nullptr;
	AllocConsole();
	freopen_s(&consoleOut, "conout$", "w", stdout);
	freopen_s(&consoleInt, "conin$", "r", stdin);
}