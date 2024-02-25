#include "SoundManager.h"
#include <SDL.h>
#include <SDL_mixer.h>
#include "SoundManager.h"
#include <iostream>

using namespace std;

SoundManager::SoundManager() {
    Mix_OpenAudio(48000, AUDIO_S16SYS, 2, 4096);
    
}

bool SoundManager::load(const char* fileName, string id, int type) {
    
    if (type == 1) {    
        Mix_Music* music = Mix_LoadMUS(fileName);
        if (music == 0) {
            cout << "Could not load music" << Mix_GetError() << endl;
            return false;
        }
        s_mMusic[id] = music;
        return true;
    }
    else {
        if (type == 0) {   
            Mix_Chunk* chunk = Mix_LoadWAV(fileName);
            if (chunk == 0) {
                cout << "Could not load sfx" << Mix_GetError() << endl;
                return false;
            }
            s_mSfxs[id] = chunk;
            return true;
        }
    }
}

void SoundManager::playMusic(string id, int loop, int ms) {
    Mix_FadeInMusic(s_mMusic[id], loop, ms);
}

void SoundManager::playSound(string id, int loop, int ms) {
    Mix_FadeInChannel(-1, s_mSfxs[id], loop, ms);
}

void SoundManager::changeVolume(int c) {
    int currentVolume = Mix_VolumeMusic(-1);
    cout << currentVolume << " " << Mix_VolumeMusic(-1) << endl;
    currentVolume += c;
    Mix_VolumeMusic(currentVolume);
}

void SoundManager::pauseOrPlay() {
    cout << Mix_PlayingMusic() << endl;
    if (Mix_PausedMusic() == 0) {
        Mix_PauseMusic();
    }
    else {
        Mix_ResumeMusic();
    }
}
void SoundManager::changeVolumeSfx(string id, int c) {
    int currentVolume = Mix_VolumeChunk(s_mSfxs[id], -1);
    currentVolume += c;
    Mix_VolumeChunk(s_mSfxs[id], currentVolume);
}
void SoundManager::setMusicPosition(double pos)
{
    if (Mix_SetMusicPosition(pos) == -1) {
        cout << "Something failed: " << Mix_GetError() << endl;
    }
}
SoundManager* SoundManager::s_mInstance = 0;