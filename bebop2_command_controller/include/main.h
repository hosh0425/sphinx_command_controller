#ifndef MAIN_H
#define MAIN_H


#include <ihm.h>



// called when the state of the device controller has changed
void stateChanged (eARCONTROLLER_DEVICE_STATE newState, eARCONTROLLER_ERROR error, void *customData);

// called when a command has been received from the drone
void commandReceived (eARCONTROLLER_DICTIONARY_KEY commandKey, ARCONTROLLER_DICTIONARY_ELEMENT_t *elementDictionary, void *customData);

// IHM updates from commands
void batteryStateChanged (uint8_t percent);

// called when a streaming frame has been received
eARCONTROLLER_ERROR didReceiveFrameCallback (ARCONTROLLER_Frame_t *frame, void *customData);

eARCONTROLLER_ERROR decoderConfigCallback (ARCONTROLLER_Stream_Codec_t codec, void *customData);

/* IHM callbacks: */
void onInputEvent (eIHM_INPUT_EVENT event, void *customData);

int customPrintCallback (eARSAL_PRINT_LEVEL level, const char *tag, const char *format, va_list va);

void onCommandReceived ( ARCONTROLLER_DICTIONARY_ELEMENT_t *elementDictionary);

#endif // MAIN_H
