#ifndef ConsoleExample_h
#define ConsoleExample_h


int Init(SDL_Surface **Screen, int argc, char **argv);
void ProcessEvents();
void KillProgram();
void Echo(ConsoleInformation *console, int argc, char* argv[]);
void DrawTextDemo();
void HelpText(SDL_Surface *Screen);
void RandText(SDL_Surface *Screen);
void AlphaChange(ConsoleInformation *console, int argc, char* argv[]);
void AddBackground(ConsoleInformation *console, int argc, char* argv[]);
void Move(ConsoleInformation *console, int argc, char* argv[]);
void Resize(ConsoleInformation *console, int argc, char* argv[]);
void ListCommands(ConsoleInformation *console);
void SetPrompt(ConsoleInformation *console, int argc, char* argv[]);
void Command_Handler(ConsoleInformation* console, char* command);

#endif



