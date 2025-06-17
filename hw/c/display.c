#include <SDL2/SDL.h>
#include <stdint.h>
#include <stdio.h>

#define WIDTH  400
#define HEIGHT 300

// 全局变量：SDL 对象和像素缓冲区
static SDL_Window *window = NULL;
static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;
static uint32_t pixel_buffer[WIDTH * HEIGHT];  // ARGB8888 格式

// DPI-C 函数：更新像素缓冲区
void update_pixel(int x, int y, int rgb) {
    if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) {
        // printf("x = %d, y = %d, rgb = %x\n", x, y, rgb);
        pixel_buffer[y * WIDTH + x] = rgb;  // 直接存储 32 位 RGB 值
    }
}

// DPI-C 函数：刷新屏幕
void refresh_screen() {
    // printf("refresh_screen start\n");
    // 更新纹理并渲染
    SDL_UpdateTexture(texture, NULL, pixel_buffer, WIDTH * sizeof(uint32_t));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    // 处理 SDL 事件（防止窗口卡死）
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            exit(0);
        }
    }
}

// 初始化 SDL 和窗口
void init_display() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "SDL init failed: %s\n", SDL_GetError());
        exit(1);
    }

    window = SDL_CreateWindow(
        "Real-Time RGB Display",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        WIDTH,
        HEIGHT,
        SDL_WINDOW_SHOWN
    );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_ARGB8888,
        SDL_TEXTUREACCESS_STREAMING,
        WIDTH,
        HEIGHT
    );

    // 清空缓冲区为黑色
    memset(pixel_buffer, 0, WIDTH * HEIGHT * sizeof(uint32_t));
    // printf("init display done");
}

// 清理资源
void cleanup_display() {
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}