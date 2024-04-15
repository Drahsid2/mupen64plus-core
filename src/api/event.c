#include <SDL.h>
#include "api/event.h"

EventCallback gVICallback = NULL;
EventIntCallback gResetCallback = NULL;
EventCallback gPauseCallback = NULL;

extern SDL_Window* g_backup_current_window;
extern SDL_GLContext g_backup_current_context;

EXPORT void* CALL GetCurrentWindow(void) {
    return (void*)g_backup_current_window;
}

EXPORT void* CALL GetCurrentContext(void) {
    return (void*)g_backup_current_context;
}

EXPORT void CALL VISetCallback(EventCallback callback) {
    gVICallback = callback;
}

EXPORT void CALL ResetSetCallback(EventIntCallback callback) {
    gResetCallback = callback;
}

EXPORT void CALL PauseSetCallback(EventCallback callback) {
    gPauseCallback = callback;
}



