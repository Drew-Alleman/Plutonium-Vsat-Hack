#pragma once
#include "addresses.h"
#include "functions.h"
#include <iostream>

using namespace addresses;

bool functions::isAlive() {
	uintptr_t GameAddress = (uintptr_t)GetModuleHandle(L"t6rmp.exe"); // Get game base
	int pHealth = *reinterpret_cast<int*>(GameAddress + HEALTH_ADDRESS);
	if (pHealth > 0) {
		return true;
	}
	return false;

}

void functions::EnableConsole() {
	FILE* consoleOut = nullptr;
	FILE* consoleInt = nullptr;
	AllocConsole();
	freopen_s(&consoleOut, "conout$", "w", stdout);
	freopen_s(&consoleInt, "conin$", "r", stdin);
}