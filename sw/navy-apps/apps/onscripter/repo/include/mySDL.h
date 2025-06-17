#ifndef _MYSDL_H
#define _MYSDL_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#ifdef __NAVY__
#include <stdio.h>
#include <assert.h>

#define DEFAULT_VIDEO_SURFACE_FLAG (SDL_HWSURFACE)

#define SDL_VERSION_ATLEAST(a, b, c) (0)

int SDL_SetAlpha(SDL_Surface *surface, uint32_t flag, uint8_t alpha);

typedef uint32_t SDLKey;

#define SDL_ALPHA_OPAQUE 0

SDL_RWops *SDL_RWFromConstMem(void *buf, int len);

#else

#define DEFAULT_VIDEO_SURFACE_FLAG (SDL_SWSURFACE)

#endif

#endif
