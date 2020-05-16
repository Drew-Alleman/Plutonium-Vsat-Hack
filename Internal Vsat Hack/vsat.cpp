#include "addresses.h"
#include "functions.h"
#include "vsat.h"
#include <iostream>

bool bVSAT = false;
using namespace addresses;

void VSAT::run() {
	uintptr_t GameAddress = (uintptr_t)GetModuleHandle(L"t6rmp.exe"); // Get game base
	std::cout << "GameBase: " << std::hex << GameAddress << std::endl; //debug
	uintptr_t VSAT_ADDR = *reinterpret_cast<uintptr_t*>(GameAddress + VSAT_ADDRESS); //get VSAT ADDR
	std::cout << "VSAT ADDR: " << std::hex << VSAT_ADDR << std::endl; //debug
	while (true) {
		if (GetAsyncKeyState(VK_NUMPAD1) & 1) {
			bVSAT = !bVSAT; // Flip Value 
			std::cout << "VSAT: " << bVSAT << std::endl; // Print if its on or off
		}
		if (bVSAT) { // if true
			if (functions::isAlive()) { // Check if user is alive
				*reinterpret_cast<int*>(VSAT_ADDR + VSAT_OFFSET) = 1; // Set VSAT to true
			}
		} else {
			*reinterpret_cast<int*>(VSAT_ADDR + VSAT_OFFSET) = 0; //set to false
		}
	} Sleep(500);
}