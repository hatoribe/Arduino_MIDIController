#include <Control_Surface.h>

USBMIDI_Interface midi;

NoteButton button {
  4,
  {60, CHANNEL_1},
};

CCPotentiometer potentiometers[] = {
  {0, {71, CHANNEL_1}},
  {1, {72, CHANNEL_1}},
};



void setup() {
  Control_Surface.begin(); // Initialize Control Surface
}

void loop() {
  Control_Surface.loop(); // Update the Control Surface
}
