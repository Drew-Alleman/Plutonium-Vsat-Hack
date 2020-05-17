# Plutonium-Vsat-Hack
Internal Plutonium Black Ops II Constant VSAT hack. Under the folder /CT/ you can <br> find the cheat table i used.

# Showcase 
![radar](/Showcase/radar.png) 

# Injection / When To Inject
I injected using the [Xenos Injector](https://www.unknowncheats.me/forum/general-programming-and-reversing/124013-xenos-injector-v2-3-2-a.html) Make sure to use manuel map injection. <br> For Xenos you can find this under advanced settings. **Inject DLL Once you have loaded into a server**. ![Manual Map](/Showcase/manual_map.jpg). 

# How To Compile
1. Make sure precompiled headers is off <br>
2. Make sure output file is a dll.
3. Build under Release -> x86 -> Local Windows Debugger

# Direct Download
you can go to [releases](https://github.com/Drew-Alleman/Plutonium-Vsat-Hack/releases/) to download the latest compiled dll.

# KeyBinds  

| Keybind   | Feature |
| ------------- | ------------- |
|  NUMPAD 1  | TOGGLE ON/OFF   |

# Addresses
```c++
namespace addresses {
	const uintptr_t VSAT_ADDRESS = 0x8E1304;
	const uintptr_t VSAT_OFFSET = 0x1B8;
}

```

