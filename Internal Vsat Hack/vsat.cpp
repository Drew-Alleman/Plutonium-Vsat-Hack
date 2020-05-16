#include "addresses.h"
#include "functions.h"
#include "vsat.h"
#include <iostream>

bool bVSAT = false;
using namespace addresses;

void VSAT::run() {
	uintptr_t GameAddress = (uintptr_t)GetModuleHandle(L"t6rmp.exe"); // Get game base
	uintptr_t VSAT_ADDR = *reinterpret_cast<uintptr_t*>(GameAddress + VSAT_ADDRESS); //get VSAT ADDR
	uintptr_t VSAT_ADDR_FINAL = (uintptr_t)(VSAT_ADDR + VSAT_OFFSET);
	while (true) {
		if (GetAsyncKeyState(VK_NUMPAD1) & 1) {
			bVSAT = !bVSAT; // Flip Value 
			std::cout << "VSAT: " << bVSAT << std::endl; // Print if its on or off
		}
		if (bVSAT) { // if true
			*reinterpret_cast<int*>(VSAT_ADDR_FINAL) = 1; // Set VSAT to true
		} else {
			*reinterpret_cast<int*>(VSAT_ADDR_FINAL) = 0; //set to false
		}
	} Sleep(500);
}