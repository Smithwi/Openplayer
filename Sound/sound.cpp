#ifndef Sound_h
#define Sound_h
#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <cstdio>
#include "../OpenAL/InitOpenAL.h"

using namespace std;
class cSound
{
private:
    ALuint buffer;
    
    ALuint source;
public:
  
private:
    int endWithError(const char* msg, int error=0);
public:
    cSound();
    ~cSound();
    int            initBackGroundSound(const char* name);
    int            initEffectSound(const char* name);
    void           Release();
    void           Play();
    void           Stop();
    void           Pause();
    
    
};


#endif 
