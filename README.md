# Plutonium-Vsat-Hack
Internal Plutonium Black Ops II Constant VSAT hack. Under the folder /CT/ you can <br> find the cheat table i used.

# Injection 
I recommend using either [Xenos Injector](https://www.unknowncheats.me/forum/general-programming-and-reversing/124013-xenos-injector-v2-3-2-a.html) or [Guided Hacking DLL Injector ](https://guidedhacking.com/resources/guided-hacking-dll-injector.4/) Make sure to use manuel map injection. Im not too familiar with the GH injector but i know its trusted and ive heard good things.  <br> For Xenos you can find this under advanced settings. ![Manual Map](/Showcase/manual_map.jpg) 

# How To Compile
Build under Release -> x86 -> Local Windows Debugger

# Direct Download
you can go to [releases](https://github.com/Drew-Alleman/Plutonium-Vsat-Hack/releases/) to download the latest compiled dll.

# KeyBinds  

| Keybind   | Feature |
| ------------- | ------------- |
|  NUMPAD 1  | TOGGLE ON/OFF   |

# Addresses
```c++
namespace addresses {
	const uintptr_t VSAT_ADDRESS = 0x008E1304;
	const uintptr_t VSAT_OFFSET = 0x1B8;
	const uintptr_t HEALTH_ADDRESS = 0x1DEF968;
}

```

