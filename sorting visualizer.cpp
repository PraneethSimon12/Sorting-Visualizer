#include<SDL.h>
#include<iostream>
#include<limits>
#include<time.h>
#include<string>
using namespace std;

const int SCREEN_WIDTH = 910;
const int SCREEN_WIDTH = 750;

const int arrSize = 130;
const int rectSize = 7;

int arr[arrSize];
int Barr[arrSize];

SDL_Window* window = NULL;
SDL_Renderer* renderer=NULL;

bool complete = false;

bool init(){
    bool success = true;
    if(SDL_INIT(SDL_INIT_VIDEO)<0){
        cout<<"Couldn't initialize SDL.SDL_Error : "<<SDL_GetError();
        success = false;
    }
    else
    {
        if(!(SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"1")))
        {
            cout<<"Warning:  Linear Texture FIltering not enabled.";
        }

        window = 
    }
}
