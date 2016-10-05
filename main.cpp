#include <stdio.h>
#include <Windows.h>
#include "Sound/Sound.h"


ALCdevice *device;
ALCcontext *context;

void OpenALinit() 
{

	device = alcOpenDevice(NULL);                                             
	context = alcCreateContext(device, NULL);                                
	alcMakeContextCurrent(context);
}

void ReleaseOpenAL( ) 
{
	alcDestroyContext(context);                                                 
	alcCloseDevice(device);
}

int main()
{

	OpenALinit();

	cSound msound; 
	msound.initBackGroundSound("test.wav"); 
	msound.Play(); 
	Sleep(100000);

	ReleaseOpenAL(); 
	return 0;
}