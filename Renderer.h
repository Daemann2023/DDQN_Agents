#include <SDL/SDL.h>

#pragma once
class Renderer
{
	SDL_Window* window;
	SDL_Renderer* renderer;

public:
    Renderer(int width, int height, const char* title);  // Constructor to initialize SDL
    ~Renderer();  // Destructor to clean up SDL resources

    void clear();  // Clears the screen
    void present();  // Updates the screen

    // Other methods to draw shapes, text, images, etc.
    void drawRectangle(int x, int y, int width, int height);
    void drawImage(SDL_Texture* texture, int x, int y);
    // ... add more methods as needed

};

