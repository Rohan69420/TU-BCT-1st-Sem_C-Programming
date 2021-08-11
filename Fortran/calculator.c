#include <stdio.h>   //Basic input output functions are defined here
#include <stdbool.h> //This provides basic bool variables
//Note: Each global variables declaration is to use them in all sub-functions
#include <SDL2/SDL.h>       //Main library for window and rendering
#include <time.h>           //maybe required alter if we need random numbers or time related functions
#include <string.h>         //string operations
#include <SDL2/SDL_ttf.h>   //main library for rendering fonts
#include <SDL2/SDL_image.h> //image library
#include <math.h>

const int WIDTH = 1200;
const int HEIGHT = 700; //Width and height of screen
char inpbuffer[1000];   //GLobal variable for words inserted during program
char input[1000];
SDL_Window *window = NULL;     //window pointer declaring global so that we can use it in all functoins
SDL_Renderer *renderer = NULL; //pointer to renderer
SDL_Texture *imgTexture = NULL;
SDL_Texture *imgTexture2 = NULL;
TTF_Font *gFont = NULL;
int mXpos, mYpos; //x and y position of mouse
// SDL_Texture *imgTexture=NULL;
struct charSize
{
    int height;
    int width;
} character[255];
bool pause = false;
//number operations
double x[20];
int operandCount = 0;
int placeValue = 0;
double inputNumber;
char operator= '0';
double opResult = 0;
int no = 0; //no of operator used
//
SDL_Texture *NewTexture[255];
SDL_Color textColor = {0, 255, 0}; //SDL color variable
//These are all the required functions for textIO process
bool Initialize(void);   //It initializes all the required variables and memorry locations like windows and renderer
void Update();           //maybe required later to udate the screen with dictionary info
void Shutdown(void);     //it kills all memory and destroys for safe exit of program.Everything initialized in initialize functions is destroyed here
void Display(char *inp); //Fuction that takes a string and displays it in screen
void createCharacters(void);
void result(double);
float sine(float);
float mod(float x, float y);
long int fact(unsigned int n);
float radian(float x);
float cosine(float);
int main(int argc, char *argv[])
{
    double new;
    atexit(Shutdown); //at exit performs shutdown function
    if (!Initialize())
    {
        exit(1); //safe exit if failed to initialize
    }
    bool quit = false; //declaring quit to be false so that if we need to quit we can declare it true
    SDL_Event event;   //an event which represents our entire program
    while (!quit)      //Since quit is false program executes till quit is true->This is the main loop to run program
    {
        // Update();
        while (SDL_PollEvent(&event)) //this catptures every event hapening during runtime
        {
            switch (event.type)
            {
            case SDL_QUIT:
                quit = true;
                break;
            case SDL_TEXTINPUT: //if users inputs text
                // Display(event.text.text); //event.text.text is the buffer where entered text goes so displaying it as it is
                break;

            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_RETURN)
                {
                    switch (operator)
                    {
                    case '+':
                        opResult = x[operandCount] + x[operandCount - 1];
                        result(opResult);

                        break;
                    case '*':
                        opResult = x[operandCount] * x[operandCount - 1];
                        result(opResult);

                        break;
                    case '/':
                        opResult = x[operandCount - 1] / x[operandCount];
                        result(opResult);
                        break;

                    case '-':
                        opResult = x[operandCount - 1] - x[operandCount];
                        result(opResult);
                        break;

                    case 's':
                        opResult = sine(x[operandCount]);
                        printf("%f\n", x[operandCount]);
                        if (x[operandCount - 1] > 0)
                        {
                            opResult = x[operandCount - 1] * sine(x[operandCount]) / 10;
                        }
                        result(opResult);
                        break;
                    case 'c':
                        opResult = cosine(x[operandCount]);
                        printf("%f\n", x[operandCount]);
                        if (x[operandCount - 1] > 0)
                        {
                            opResult = x[operandCount - 1] * sine(x[operandCount]) / 10;
                        }
                        result(opResult);
                        break;

                    default:
                        break;
                    }
                }
                if (event.key.keysym.sym == SDLK_0 && SDL_GetModState() & KMOD_LSHIFT)
                {
                    Display(")");
                }
                else
                {
                    switch (event.key.keysym.sym)
                    {
                    case SDLK_0:
                        Display("0");

                        break;
                    case SDLK_KP_0:
                        Display("0");

                        break;
                    case SDLK_1:
                        Display("1");
                        placeValue++;
                        break;
                    case SDLK_KP_1:
                        Display("1");
                        placeValue++;
                        break;
                    case SDLK_2:
                        Display("2");
                        placeValue++;
                        break;
                    case SDLK_KP_2:
                        Display("2");
                        placeValue++;
                        break;
                    case SDLK_3:
                        Display("3");
                        placeValue++;
                        break;
                    case SDLK_KP_3:
                        Display("3");
                        placeValue++;
                        break;
                    case SDLK_4:
                        Display("4");
                        placeValue++;
                        break;
                    case SDLK_KP_4:
                        Display("4");
                        placeValue++;
                        break;
                    case SDLK_5:
                        Display("5");
                        placeValue++;
                        break;
                    case SDLK_KP_5:
                        Display("5");
                        placeValue++;
                        break;
                    case SDLK_6:
                        Display("6");
                        placeValue++;
                        break;
                    case SDLK_KP_6:
                        Display("6");
                        placeValue++;
                        break;
                    case SDLK_7:
                        Display("7");
                        placeValue++;
                        break;
                    case SDLK_KP_7:
                        Display("7");
                        placeValue++;
                        break;
                    case SDLK_8:
                        Display("8");
                        placeValue++;
                        break;
                    case SDLK_KP_8:
                        Display("8");
                        placeValue++;
                        break;
                    case SDLK_9:
                        Display("9");
                        placeValue++;
                        break;
                    case SDLK_KP_9:
                        Display("9");
                        placeValue++;
                        break;

                    case SDLK_KP_PLUS:
                        placeValue = 0;
                        Display("+");
                        operator= '+';
                        operandCount++;

                        break;
                    case SDLK_KP_MULTIPLY:
                        placeValue = 0;
                        Display("*");
                        operator= '*';
                        operandCount++;
                        break;
                    case SDLK_KP_DIVIDE:
                        placeValue = 0;
                        Display("/");
                        operator= '/';
                        operandCount++;
                        break;
                    case SDLK_KP_MINUS:
                        placeValue = 0;
                        Display("-");
                        operator= '-';
                        operandCount++;
                        break;
                    case SDLK_s:
                        placeValue = 0;
                        Display("sin(");
                        operator= 's';
                        operandCount++;
                        break;
                    case SDLK_c:
                        placeValue = 0;
                        Display("cos(");
                        operator= 'c';
                        operandCount++;
                        break;

                    default:
                        break;
                    }
                }
            }
            exit(1);
            SDL_Quit(); //This is the quit function of SDL
            return 0;
        }
        bool Initialize(void)
        {
            if (SDL_Init(SDL_INIT_VIDEO) != 0) //Video initialization
            {
                fprintf(stderr, "Failed to initialize SDL:%s\n", SDL_GetError()); //if there is error in video initialization it prints failed to initialize to stderr
                return false;
            }
            window = SDL_CreateWindow("Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN); //Creating a window with width height and title parameters note that position of window is not defined
            if (!window)
            {
                return false;
            }
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC); //Initializing a renderer in the creating window which render objects there
            if (!renderer)
            {
                return false;
            }
            if (TTF_Init() == -1)
            {
                return false;
            }
            createCharacters();
            // loadImage("searchLayout.png");
            // loadDisplay("Display.png");
            return true; //If it fails to initialize even 1 memory adresses it simply returns false
        }
        void Update()
        {
            // SDL_SetRenderDrawColor(renderer,255,255,255,255);
        }
        void Shutdown(void) //Safe exit functon
        {
            printf("%d", inputNumber);
            for (int i = 0; i < 255; i++)
            {
                SDL_DestroyTexture(NewTexture[i]);
            }

            SDL_DestroyTexture(imgTexture);
            if (renderer)
            {

                SDL_DestroyRenderer(renderer); //Destroys renderer
            }
            if (window)
            {
                SDL_DestroyWindow(window); //Destroys window
            }
            TTF_Quit(); //Exit TTF->True type font and SDL->Simple DirectMedia Layer
            SDL_Quit();
        }

        void Display(char *inp)
        {
            SDL_RenderClear(renderer);
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            strcat(inpbuffer, inp); //Concatenates previous input with current input

            if (atoi(inp) >= 0 || atoi(inp) < 0)
            {
                x[operandCount] = atof(inp) + x[operandCount] * 10;
            }
            inp = strcat(inpbuffer, "");
            SDL_Rect dest;
            int i = 0;
            dest.x = 0;
            dest.y = 0;
            while (*inp)
            {
                dest.x += i;
                dest.w = character[*inp].width;
                dest.h = character[*inp].height;
                SDL_RenderCopy(renderer, NewTexture[(int)*inp], NULL, &dest);
                i = dest.w;
                inp++;
            }
            SDL_RenderPresent(renderer);
        }
        void createCharacters(void)
        {
            gFont = TTF_OpenFont("arial.ttf", 24); //SDL font pointer
            SDL_Surface *CharacterMap[255];
            for (int i = 0; i < 255; i++)
            {
                char str[2] = {(char)i, '\0'};
                CharacterMap[i] = TTF_RenderText_Blended_Wrapped(gFont, str, textColor, WIDTH - 50);
                NewTexture[i] = SDL_CreateTextureFromSurface(renderer, CharacterMap[i]);
                character[i].height = CharacterMap[i] ? CharacterMap[i]->h : 0;
                character[i].width = CharacterMap[i] ? CharacterMap[i]->w : 0;
                SDL_FreeSurface(CharacterMap[i]);
            }
            TTF_CloseFont(gFont);
        }
        void result(double result)
        {
            sprintf(input, "=%f", result);
            printf("%s", input);
            char *inp = input;

            SDL_Rect dest;
            int i = 0;
            dest.x = 0;
            dest.y = 20;
            while (*inp)
            {
                dest.x += i;
                dest.w = character[*inp].width;
                dest.h = character[*inp].height;
                SDL_RenderCopy(renderer, NewTexture[(int)*inp], NULL, &dest);
                i = dest.w;
                inp++;
            }
            SDL_RenderPresent(renderer);
            operandCount = 0;
            placeValue = 0;
            for (int i = 0; i < 20; i++)
            {
                x[i] = 0;
            }
            operator= '0';
            strcpy(inpbuffer, "");
        }
        float sine(float x)
        {
            int i;
            float result = 0;
            float term;
            float an;
            int temp;
            int t;
            an = (mod(x, 180) * 3.141592) / 180;
            temp = x / 180;
            for (i = 1; i <= 15; i++)
            {
                term = pow(-1, i + 1) * pow(an, (2 * i) - 1) / fact((2 * i) - 1);
                result += term;
            }
            if (temp % 2 == 0)
            {
                return (result);
            }
            else
            {
                return (result * -1);
            }
        }
        float mod(float x, float y)
        {
            int temp;
            float result;
            temp = x / y;
            result = x - temp * y;
            return (result);
        }
        long int fact(unsigned int n)
        {
            long int result;
            if (n == 0)
            {
                return (1);
            }
            else
            {
                return (n * fact(n - 1));
            }
        }
        float cosine(float x)
        {
            float result;
            result = pow(1 - pow(sine(x), 2), 0.5);
            return (result);
        }
        float radian(float x)
        {
            float result;
            result = x * (3.141592 / 180);
            return result;
        }
    }
}